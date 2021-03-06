class shootout_state : public driver_data_t
{
public:
	static driver_data_t *alloc(running_machine &machine) { return auto_alloc_clear(&machine, shootout_state(machine)); }

	shootout_state(running_machine &machine)
		: driver_data_t(machine) { }

	tilemap_t *background;
	tilemap_t *foreground;
	UINT8 *spriteram;
	UINT8 *videoram;
	UINT8 *textram;
};


/*----------- defined in video/shootout.c -----------*/

WRITE8_HANDLER( shootout_videoram_w );
WRITE8_HANDLER( shootout_textram_w );

PALETTE_INIT( shootout );
VIDEO_START( shootout );
VIDEO_UPDATE( shootout );
VIDEO_UPDATE( shootouj );

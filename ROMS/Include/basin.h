/*
** svn $Id: basin.h 709 2014-01-23 20:09:38Z arango $
*******************************************************************************
** Copyright (c) 2002-2014 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Big Bad Basin.
**
** Application flag:   BASIN
** Input script:       ocean_basin.in
*/

#define UV_ADV
#define UV_COR
#define UV_QDRAG
#define UV_VIS4
#define MIX_S_UV
#define DJ_GRADPS
#define TS_U3HADVECTION
#define TS_C4VADVECTION
#define SOLVE3D
#define SPLINES
#define EASTERN_WALL
#define WESTERN_WALL
#define SOUTHERN_WALL
#define NORTHERN_WALL
#define BODYFORCE
#define ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_BTFLUX

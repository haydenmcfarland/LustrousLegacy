#ifndef ENUMS_H_
#define ENUMS_H_

enum Speed {
	Slow = 1,
	Normal = 16,
	Fast = 8,
	Fastest = 16
};

enum System {
	Tilesize = 64
};

enum Direction {
	South,
	West,
	East,
	North,
	SouthWest,
	SouthEast,
	NorthWest,
	NorthEast,
	Null
};

enum Layer {
	Background_1,
	Background_2,
	Field,
	Collision_Objects,
	Collision_Boxes,
	Event_Layer,
	Overlay
};

enum Selection {
	Play_Game = 1,
	Load_Game = 2,
	Settings = 3,
	Exit = 4,
};

enum Battle {
	Fight = 1,
	Items = 2,
	Status = 3,
	Escape = 4,
};

enum Cursor_Direction {
	Down,
	Up
};

enum Font_Size {
	Small = 14,
	Default = 18,
	Large = 24,
	Big = 32
};

enum Source {
	Idle = 1
};

enum Fade {
	In = 0,
	Out = 1
};

enum Map {
	Counter = 0,
	FrameDuration = 1,
	Layer = 2
};
#endif


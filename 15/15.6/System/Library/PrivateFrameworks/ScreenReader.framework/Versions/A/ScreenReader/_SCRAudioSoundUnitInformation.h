@interface _SCRAudioSoundUnitInformation : NSObject

@property char inUse;
@property int busId;
@property struct ComponentInstanceRecord { long long x0[1]; } *soundUnit;

@end

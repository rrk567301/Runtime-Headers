@interface _FEFocusRegionMovementInfo : _FEFocusMovementInfo

@property (nonatomic) unsigned long long originatingHeading;

+ (id)_movementWithHeading:(unsigned long long)a0 linearHeading:(unsigned long long)a1 originatingHeading:(unsigned long long)a2 isInitial:(char)a3 inputType:(unsigned long long)a4;

@end

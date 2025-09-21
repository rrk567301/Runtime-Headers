@class NSObject;

@interface SCRFocusMovementNavigationEventInfo : NSObject

@property (nonatomic) unsigned long long focusDirection;
@property (nonatomic) char moveByGroups;
@property (nonatomic) char allowsDeeperDrillIn;
@property (nonatomic) char shouldWrap;
@property (weak, nonatomic) NSObject *firstLevelAncestorForHeadingMovementSourceElement;
@property (weak, nonatomic) NSObject *secondLevelAncestorForHeadingMovementSourceElement;

+ (id)infoWithDirection:(unsigned long long)a0;
+ (id)infoWithDirection:(unsigned long long)a0 moveByGroups:(char)a1 allowsDeeperDrillIn:(char)a2 shouldWrap:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

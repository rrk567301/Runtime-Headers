@interface PTEffectReaction : NSObject

@property long long triggerID;
@property unsigned long long effectType;
@property unsigned long long orientation;
@property double startTimeSeconds;
@property void /* unknown type, empty encoding */ position;
@property BOOL uiTriggeredReaction;

- (id)init;
- (id)emoji;

@end

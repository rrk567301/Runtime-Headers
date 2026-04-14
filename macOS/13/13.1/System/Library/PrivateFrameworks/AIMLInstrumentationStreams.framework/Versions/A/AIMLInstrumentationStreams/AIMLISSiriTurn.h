@class NSUUID;

@interface AIMLISSiriTurn : AIMLISEventGraph

@property (nonatomic, readonly) NSUUID *turnId;
@property (nonatomic, readonly) NSUUID *previousTurnId;

@end

@class NSNumber;

@interface MTRActionsClusterStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSNumber *invokeID;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

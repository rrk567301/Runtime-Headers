@class NSNumber;

@interface MTRActionsClusterActionFailedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSNumber *invokeID;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;
@property (copy, nonatomic) NSNumber *error;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

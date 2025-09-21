@class NSError;

@interface AuditProhibitedAccessoryOperationResult : NSObject

@property (retain) NSError *error;
@property char shouldReschedule;

- (void).cxx_destruct;

@end

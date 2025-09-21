@class NSError;

@interface AuditAllowedAccessoryOperationResult : NSObject

@property char credentialsRemoved;
@property (retain) NSError *error;
@property char shouldReschedule;

- (void).cxx_destruct;

@end

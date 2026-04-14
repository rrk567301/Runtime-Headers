@interface CNClientLoggingIdentifier : NSObject

+ (id)loggingIdentifierForCurrentProcess;
+ (id)loggingIdentifierForAuditToken:(id)a0;

- (id)init;

@end

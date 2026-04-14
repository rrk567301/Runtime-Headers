@class NSString, NSDate;

@interface MessageTracerInfo : NSObject

@property (retain) NSDate *sessionStartTime;
@property (retain) NSString *serverVersion;

+ (id)getAppBundleID;
+ (void)logNetworkAddressType:(id)a0;
+ (void)logAddressResolveFailure:(BOOL)a0 withFailureReason:(id)a1;

- (void)dealloc;
- (id)init;
- (void)logConnectionFailure:(BOOL)a0 withFailureReason:(id)a1;
- (void)logServerVersion:(id)a0;
- (void)logAuthenticationType:(id)a0;
- (void)logKerberosFailure:(BOOL)a0 withFailureReason:(id)a1;
- (void)logAuthenticationFinished:(BOOL)a0 withAuthResult:(int)a1;
- (void)logConfigurationString:(id)a0;
- (void)logSessionEndedToMessageTracer;

@end

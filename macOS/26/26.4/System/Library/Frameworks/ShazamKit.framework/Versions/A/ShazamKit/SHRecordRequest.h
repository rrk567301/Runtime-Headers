@class NSDate;

@interface SHRecordRequest : SHMatcherRequest

@property (readonly) NSDate *deadline;
@property (readonly) BOOL hasHitDeadline;
@property (readonly) BOOL sendNotifications;
@property (readonly) BOOL storeSignatureOnNoMatch;
@property (readonly) BOOL enableLiveActivity;

+ (BOOL)supportsSecureCoding;
+ (id)request;
+ (id)requestWithDeadline:(id)a0;
+ (id)requestWithID:(id)a0 notifications:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)watchdogTimeout;
- (id)initWithRequestID:(id)a0 notifications:(BOOL)a1 deadline:(id)a2 storeSignatureOnNoMatch:(BOOL)a3 enableLiveActivity:(BOOL)a4;
- (void)startRequestWithMatcher:(id)a0;

@end

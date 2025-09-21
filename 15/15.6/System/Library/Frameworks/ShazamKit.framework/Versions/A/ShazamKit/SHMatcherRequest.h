@class SHSignature, NSUUID, NSString, NSDate;

@interface SHMatcherRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSUUID *requestID;
@property (readonly) SHSignature *signature;
@property (readonly) NSDate *deadline;
@property (readonly) char hasHitDeadline;
@property (readonly, copy) NSString *installationID;
@property (readonly) char sendNotifications;
@property (readonly) long long stopCondition;
@property (readonly) long long type;
@property (readonly) double watchdogTimeout;

+ (id)requestOnceWithAppIntentForRequestID:(id)a0;
+ (id)requestOnceWithNotifications:(char)a0;
+ (id)requestOnceWithNotifications:(char)a0 forRequestID:(id)a1;
+ (id)requestSignatureGenerationOnce;
+ (id)requestSignatureGenerationOnceForRequestID:(id)a0;
+ (id)requestSignatureGenerationUntilDeadline:(id)a0;
+ (id)requestSignatureGenerationUntilDeadline:(id)a0 forRequestID:(id)a1;
+ (id)requestToMatchSignature:(id)a0 installationID:(id)a1 sendNotifications:(char)a2;
+ (id)requestToMatchSignature:(id)a0 installationID:(id)a1 sendNotifications:(char)a2 forRequestID:(id)a3;
+ (id)requestToMatchUntilDeadline:(id)a0 sendNotifications:(char)a1;
+ (id)requestToMatchUntilDeadline:(id)a0 sendNotifications:(char)a1 forRequestID:(id)a2;
+ (id)requestUntilMatchWithNotifications:(char)a0;
+ (id)requestUntilMatchWithNotifications:(char)a0 forRequestID:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSignature:(id)a0 deadline:(id)a1 installationID:(id)a2 sendNotifications:(char)a3 stopCondition:(long long)a4 requestType:(long long)a5 requestID:(id)a6;
- (id)initWithSignature:(id)a0 deadline:(id)a1 sendNotifications:(char)a2 stopCondition:(long long)a3 requestType:(long long)a4 requestID:(id)a5;

@end

@class NSUUID, NSString;

@interface SHMatcherRequest : NSObject <NSSecureCoding, SHMatcherRequestProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *requestID;
@property (readonly, copy) NSString *installationID;
@property (readonly) long long stopCondition;
@property (readonly) long long type;
@property (readonly) double watchdogTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStopCondition:(long long)a0 requestType:(long long)a1 requestID:(id)a2 installationID:(id)a3;
- (void)startRequestWithMatcher:(id)a0;

@end

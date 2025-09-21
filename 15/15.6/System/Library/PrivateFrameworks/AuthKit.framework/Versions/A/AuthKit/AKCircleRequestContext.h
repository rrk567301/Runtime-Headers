@class NSString, AKAppleIDAuthenticationContext, AKCircleRequestPayload;

@interface AKCircleRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identityTokenValue;
@property (retain, nonatomic) NSString *heartbeatTokenValue;
@property (retain, nonatomic) NSString *pushToken;
@property (nonatomic) char _notifyOfTimeout;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (retain, nonatomic) AKCircleRequestPayload *payload;
@property (nonatomic) char waitForReply;
@property (nonatomic) double waitForReplyTimeout;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

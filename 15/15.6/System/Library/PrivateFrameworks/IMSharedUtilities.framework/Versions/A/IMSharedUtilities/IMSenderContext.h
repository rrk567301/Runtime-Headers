@class NSString, IMSenderContext_Impl;

@interface IMSenderContext : NSObject <NSSecureCoding> {
    IMSenderContext_Impl *swiftImpl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isTrustedSender;
@property (readonly, nonatomic) char isFromMe;
@property (readonly, nonatomic) NSString *serviceName;

+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)a0;
+ (id)contextWithKnownSender:(char)a0;
+ (id)contextWithKnownSender:(char)a0 serviceName:(id)a1;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)a0;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSenderContext_Impl:(id)a0;

@end

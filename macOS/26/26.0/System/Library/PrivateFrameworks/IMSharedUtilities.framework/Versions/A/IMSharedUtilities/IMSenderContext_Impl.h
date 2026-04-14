@class NSString;

@interface IMSenderContext_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isKnownSender;
    void /* function */ serviceName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) BOOL isTrustedSender;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)a0;
+ (id)contextWithKnownSender:(BOOL)a0;
+ (id)contextWithKnownSender:(BOOL)a0 serviceName:(id)a1;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)a0;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

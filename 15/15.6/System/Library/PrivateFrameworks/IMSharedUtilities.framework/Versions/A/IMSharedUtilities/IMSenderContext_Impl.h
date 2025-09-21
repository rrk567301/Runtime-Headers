@class NSString;

@interface IMSenderContext_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isKnownSender;
    void /* unknown type, empty encoding */ serviceName;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFromMe;
@property (nonatomic, readonly) char isTrustedSender;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)a0;
+ (id)contextWithKnownSender:(char)a0;
+ (id)contextWithKnownSender:(char)a0 serviceName:(id)a1;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)a0;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

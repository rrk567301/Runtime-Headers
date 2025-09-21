@class NSData, MEMessageSecurityInformation, MEDecodedMessageBanner;

@interface MEDecodedMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, nonatomic) MEMessageSecurityInformation *securityInformation;
@property (readonly, nonatomic) NSData *context;
@property (readonly, nonatomic) MEDecodedMessageBanner *banner;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 securityInformation:(id)a1 context:(id)a2;
- (id)initWithData:(id)a0 securityInformation:(id)a1 context:(id)a2 banner:(id)a3;

@end

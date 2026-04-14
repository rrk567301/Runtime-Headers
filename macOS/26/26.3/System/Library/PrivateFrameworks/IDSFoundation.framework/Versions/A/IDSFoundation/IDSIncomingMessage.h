@class NSString, IDSMessageContext, NSData;

@interface IDSIncomingMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *service;
@property (retain, nonatomic) IDSMessageContext *messageContext;
@property (readonly, nonatomic) NSData *decryptedData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDecryptedData:(id)a0 messageContext:(id)a1 service:(id)a2;

@end

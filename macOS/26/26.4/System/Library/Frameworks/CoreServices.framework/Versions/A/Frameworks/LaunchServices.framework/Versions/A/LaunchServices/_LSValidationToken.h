@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
    id _owner;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithPayload:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

@class NSData, NSString;

@interface HMFileTransferReceiverParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSString *targetID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPublicKey:(id)a0 targetID:(id)a1;

@end

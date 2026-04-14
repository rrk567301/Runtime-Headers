@class NSData;

@interface LASmartCardIdentifier : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *pubKeyHash;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPubKeyHash:(id)a0;

@end

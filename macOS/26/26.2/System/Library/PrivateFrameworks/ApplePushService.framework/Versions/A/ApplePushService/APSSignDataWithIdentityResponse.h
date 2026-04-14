@class NSData, NSArray;

@interface APSSignDataWithIdentityResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *nonce;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

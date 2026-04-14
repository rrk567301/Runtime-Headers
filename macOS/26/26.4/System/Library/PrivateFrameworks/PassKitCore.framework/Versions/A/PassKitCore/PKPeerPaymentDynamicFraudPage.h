@class NSString, NSArray;

@interface PKPeerPaymentDynamicFraudPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *bodyContents;
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, copy, nonatomic) NSString *confirmButtonTitle;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

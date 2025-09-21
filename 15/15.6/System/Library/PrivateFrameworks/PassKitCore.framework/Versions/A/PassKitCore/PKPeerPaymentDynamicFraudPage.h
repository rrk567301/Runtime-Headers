@class NSString, NSArray;

@interface PKPeerPaymentDynamicFraudPage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *bodyContents;
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, copy, nonatomic) NSString *confirmButtonTitle;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end

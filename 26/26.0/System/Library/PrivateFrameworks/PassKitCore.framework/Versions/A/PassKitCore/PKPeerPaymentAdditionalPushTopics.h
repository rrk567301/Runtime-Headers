@class NSString;

@interface PKPeerPaymentAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *preferences;
@property (copy, nonatomic) NSString *associatedAccounts;
@property (copy, nonatomic) NSString *requests;
@property (copy, nonatomic) NSString *endpoint;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

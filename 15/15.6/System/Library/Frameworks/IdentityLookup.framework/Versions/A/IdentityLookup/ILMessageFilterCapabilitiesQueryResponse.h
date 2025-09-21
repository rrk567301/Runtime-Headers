@class NSString, NSArray;

@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *transactionalSubActions;
@property (copy, nonatomic) NSArray *promotionalSubActions;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCapabilitiesResponse:(id)a0;

@end

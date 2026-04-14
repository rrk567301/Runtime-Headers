@class NSString, NSArray;

@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *transactionalSubActions;
@property (copy, nonatomic) NSArray *promotionalSubActions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToCapabilitiesResponse:(id)a0;

@end

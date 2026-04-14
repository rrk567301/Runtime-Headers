@class NSString, NSArray;

@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *transactionalSubActions;
@property (copy, nonatomic) NSArray *promotionalSubActions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCapabilitiesResponse:(id)a0;

@end

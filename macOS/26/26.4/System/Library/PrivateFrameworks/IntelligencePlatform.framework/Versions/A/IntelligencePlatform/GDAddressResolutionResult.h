@class NSArray, NSString;

@interface GDAddressResolutionResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *rankedEntities;
@property (readonly, copy, nonatomic) NSString *topRankedMdId;
@property (readonly, copy, nonatomic) NSString *topRankedContactId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRankedEntities:(id)a0;
- (BOOL)isEqualToAddressResolutionResult:(id)a0;

@end

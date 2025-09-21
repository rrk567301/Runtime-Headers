@class NSArray, NSString;

@interface GDAddressResolutionResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *rankedEntities;
@property (readonly, copy, nonatomic) NSString *topRankedMdId;
@property (readonly, copy, nonatomic) NSString *topRankedContactId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRankedEntities:(id)a0;
- (char)isEqualToAddressResolutionResult:(id)a0;

@end

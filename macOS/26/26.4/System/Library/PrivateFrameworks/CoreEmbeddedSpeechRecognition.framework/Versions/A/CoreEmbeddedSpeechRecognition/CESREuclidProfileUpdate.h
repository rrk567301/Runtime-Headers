@class NSArray, NSDictionary;

@interface CESREuclidProfileUpdate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deletionIdentifiers;
@property (readonly, nonatomic) NSDictionary *insertions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDeletionIdentifiers:(id)a0 insertions:(id)a1;

@end

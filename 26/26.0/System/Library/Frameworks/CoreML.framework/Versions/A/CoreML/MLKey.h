@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *scope;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyName:(id)a0;
- (id)deletingPrefixingScope:(id)a0;
- (BOOL)hasGlobalScope;
- (BOOL)hasSameNameAsKey:(id)a0;
- (id)initWithKeyName:(id)a0 scope:(id)a1;
- (id)scopedTo:(id)a0;

@end

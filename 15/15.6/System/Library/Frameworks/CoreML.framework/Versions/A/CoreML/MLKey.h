@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *scope;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deletingPrefixingScope:(id)a0;
- (char)hasGlobalScope;
- (char)hasSameNameAsKey:(id)a0;
- (id)initWithKeyName:(id)a0;
- (id)initWithKeyName:(id)a0 scope:(id)a1;
- (id)scopedTo:(id)a0;

@end

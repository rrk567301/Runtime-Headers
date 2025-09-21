@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSQueryGenerationToken *currentQueryGenerationToken;
@property (class, readonly) BOOL supportsSecureCoding;

+ (id)nostoresQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

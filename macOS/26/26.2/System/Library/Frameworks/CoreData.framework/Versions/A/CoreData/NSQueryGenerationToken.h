@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSQueryGenerationToken *currentQueryGenerationToken;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)unpinnedQueryGenerationToken;
+ (id)nostoresQueryGenerationToken;

- (BOOL)_isEnabled;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end

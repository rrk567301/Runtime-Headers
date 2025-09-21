@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSQueryGenerationToken *currentQueryGenerationToken;
@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEnabled;

@end

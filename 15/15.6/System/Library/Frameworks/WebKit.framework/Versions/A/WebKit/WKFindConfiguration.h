@interface WKFindConfiguration : NSObject <NSCopying>

@property (nonatomic) char backwards;
@property (nonatomic) char caseSensitive;
@property (nonatomic) char wraps;

+ (char)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

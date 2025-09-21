@interface WKFindResult : NSObject <NSCopying>

@property (readonly, nonatomic) char matchFound;

+ (char)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_initWithMatchFound:(char)a0;

@end

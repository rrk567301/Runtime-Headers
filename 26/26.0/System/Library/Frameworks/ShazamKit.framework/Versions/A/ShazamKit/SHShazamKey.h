@class NSString;

@interface SHShazamKey : NSObject <NSCopying>

@property (readonly, copy) NSString *validatedKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShazamKeyValid:(id)a0;

@end

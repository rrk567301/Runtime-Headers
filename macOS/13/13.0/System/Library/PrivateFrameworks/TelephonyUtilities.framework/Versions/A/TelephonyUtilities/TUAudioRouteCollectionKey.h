@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *mode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 mode:(id)a1;
- (BOOL)isEqualToAudioRouteCollectionKey:(id)a0;

@end

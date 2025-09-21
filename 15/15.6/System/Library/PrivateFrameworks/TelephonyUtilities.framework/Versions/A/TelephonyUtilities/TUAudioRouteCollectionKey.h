@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *mode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 mode:(id)a1;
- (char)isEqualToAudioRouteCollectionKey:(id)a0;

@end

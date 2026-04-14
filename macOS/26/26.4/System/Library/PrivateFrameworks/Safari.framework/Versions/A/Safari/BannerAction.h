@class Banner;

@interface BannerAction : NSObject

@property (readonly, nonatomic) Banner *banner;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL animates;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBanner:(id)a0 type:(long long)a1 animates:(BOOL)a2;

@end

@class Banner;

@interface BannerAction : NSObject

@property (readonly, nonatomic) Banner *banner;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char animates;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBanner:(id)a0 type:(long long)a1 animates:(char)a2;

@end

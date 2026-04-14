@class NSString, CIFilter;

@interface KHPhotoEffect : NSObject

@property (readonly, nonatomic) CIFilter *filter;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hidden;

+ (id)allEffects;
+ (id)_effectWithFilterName:(id)a0 displayName:(id)a1 hidden:(BOOL)a2;
+ (id)visibleEffects;
+ (unsigned long long)indexOfEffectWithFilterName:(id)a0;
+ (id)effectWithFilterName:(id)a0;

- (void).cxx_destruct;

@end

@interface GEOMapItemPhotoOptions : NSObject

@property (readonly, nonatomic) char allowSmaller;
@property (readonly, nonatomic) long long preferredCropStyle;
@property (readonly, nonatomic) long long preferredFormat;

+ (id)defaultPhotoOptionsWithAllowSmaller:(char)a0;
+ (id)defaultPhotoOptionsWithCropStyle:(long long)a0;

- (id)initWithAllowSmaller:(char)a0 cropStyle:(long long)a1 format:(long long)a2;

@end

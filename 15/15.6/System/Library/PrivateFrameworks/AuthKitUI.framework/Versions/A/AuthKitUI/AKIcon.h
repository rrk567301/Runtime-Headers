@class NSString, NSData;

@interface AKIcon : NSObject {
    double _scale;
    struct CGSize { double width; double height; } _size;
    NSString *_name;
    NSString *_bundleID;
    NSData *_data;
    unsigned long long _maskingStyle;
}

+ (double)defaultScale;
+ (double)_screenScale;
+ (id)iconWithBundleID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)iconWithData:(id)a0 scale:(double)a1;
+ (id)iconWithIconContext:(id)a0;
+ (id)iconWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)iconWithPresentationContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)iconType;
- (id)_iconWithImage:(id)a0;
- (id)_imageWithBundleID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 masked:(char)a2;
- (id)automaskedImage;
- (id)maskedImageData;
- (struct CGImage { } *)_CGImageForImage:(id)a0;
- (id)_applicationProxyForBundleID:(id)a0;
- (id)_catalogueImageWithName:(id)a0;
- (id)_dataForImage:(id)a0;
- (char)_hasInstalledApplicationWithBundleID:(id)a0;
- (id)_imageWithData:(id)a0 scale:(double)a1 masked:(char)a2;
- (id)_imageWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1 masked:(char)a2;
- (id)_imageWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 masked:(char)a2;
- (char)_shouldMaskImage;
- (id)automaskedImageData;
- (id)initWithBundleID:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithData:(id)a0 scale:(double)a1;
- (id)initWithIconContext:(id)a0;
- (id)initWithPresentationContext:(id)a0;
- (id)maskedImage;
- (id)unmaskedImage;
- (id)unmaskedImageData;

@end

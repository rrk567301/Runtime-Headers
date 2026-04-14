@class FastMetalColorSampler;

@interface CNCoreImageDerivedColorGenerator : NSObject {
    FastMetalColorSampler *colorSampler;
}

+ (id)scheduler;
+ (id)defaultGrayColors;
+ (id)encodedDataFromColors:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)fetchColorsForImage:(id)a0;

@end

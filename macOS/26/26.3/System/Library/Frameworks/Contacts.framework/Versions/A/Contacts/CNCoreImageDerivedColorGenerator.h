@class FastMetalColorSampler;

@interface CNCoreImageDerivedColorGenerator : NSObject {
    FastMetalColorSampler *colorSampler;
}

+ (id)scheduler;
+ (id)defaultGrayColors;
+ (id)encodedDataFromColors:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)fetchColorsForImage:(id)a0;

@end

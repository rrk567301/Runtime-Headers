@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {
    unsigned int _scaleFactor;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) TDThemeBitSource *source;
@property (readonly, nonatomic) NSString *baseName;
@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;

+ (id)_filenameRegex;
+ (long long)idiomFromImageFilename:(id)a0;
+ (char)isTemplateFromImageFilename:(id)a0;
+ (unsigned int)scaleFactorFromImageFilename:(id)a0;
+ (long long)subtypeFromImageFilename:(id)a0;

- (void)setScaleFactor:(unsigned int)a0;
- (unsigned int)scaleFactor;
- (id)_sourceRelativePathComponents;
- (id)fileURLWithDocument:(id)a0;
- (char)hasProduction;
- (void)setHasProduction:(id)a0;
- (id)sourceRelativePath;

@end

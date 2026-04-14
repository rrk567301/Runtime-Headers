@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {
    AVPortraitEffectsMatteInternal *_internal;
}

@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer { } *mattingImage;

+ (void)initialize;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryMetadata:(struct CGImageMetadata { } *)a1;
- (const struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (const struct __CFString { } *)auxiliaryImageType;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 portraitEffectsMatteMetadataDictionary:(id)a1;
- (id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)a0;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (short)versionMajor;
- (short)versionMinor;

@end

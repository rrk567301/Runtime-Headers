@class NSDictionary, NSString;

@interface AVCapturePhotoSettingsInternal_Tundra : NSObject {
    NSDictionary *format;
    NSString *processedFileType;
    long long uniqueID;
    char highResolutionPhotoEnabled;
    long long photoQualityPrioritization;
    long long flashMode;
    char constantColorEnabled;
    char constantColorFallbackPhotoDeliveryEnabled;
    char shutterSoundSuppressionEnabled;
    struct { int width; int height; } maxPhotoDimensions;
}

@end

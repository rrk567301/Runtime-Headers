@class NSDictionary, NSString;

@interface AVCapturePhotoSettingsInternal_Tundra : NSObject {
    NSDictionary *format;
    NSString *processedFileType;
    long long uniqueID;
    BOOL highResolutionPhotoEnabled;
    long long photoQualityPrioritization;
    long long flashMode;
    struct { int width; int height; } maxPhotoDimensions;
}

@end

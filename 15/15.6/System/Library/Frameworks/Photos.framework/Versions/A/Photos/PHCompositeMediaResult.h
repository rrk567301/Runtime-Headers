@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    char _isInCloud;
    char _cancelled;
}

@property (readonly, nonatomic) char isPlaceholder;
@property (readonly, nonatomic) char isDegraded;
@property (readonly, nonatomic) char isDerivedFromDeferredPreview;
@property (nonatomic) char isInCloud;
@property (nonatomic, getter=isCancelled) char cancelled;

+ (id)resultWithRequestID:(int)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)error;
- (id)info;
- (void)setError:(id)a0;
- (id)imageData;
- (id)initWithRequestID:(int)a0;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageProperties;
- (id)imageURL;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)clearError;
- (id)sandboxExtensionToken;
- (void)setSandboxExtensionToken:(id)a0;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)mediaMetadata;
- (id)_sanitizedError;
- (id)allowedInfoKeys;
- (void)setErrorIfNone:(id)a0;
- (void)addInfoFromDictionary:(id)a0;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)baseVersionNeeded;
- (char)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (char)containsValidData;
- (id)errorInfoKey;
- (id)fingerPrint;
- (id)imagePropertiesLoadIfNeeded:(char)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;

@end

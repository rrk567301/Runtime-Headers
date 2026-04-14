@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isDerivedFromDeferredPreview;
@property (nonatomic) BOOL isInCloud;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

+ (id)resultWithRequestID:(int)a0 error:(id)a1;

- (id)uniformTypeIdentifier;
- (id)videoURL;
- (long long)uiOrientation;
- (id)imageProperties;
- (BOOL)containsValidData;
- (id)info;
- (id)error;
- (void)setSandboxExtensionToken:(id)a0;
- (struct CGImage { } *)imageRef;
- (id)imageData;
- (id)sanitizedInfoDictionary;
- (id)fingerPrint;
- (id)initWithRequestID:(int)a0;
- (id)exifOrientation;
- (id)allowedInfoKeys;
- (id)sandboxExtensionToken;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)imageURL;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)clearError;
- (id)mediaMetadata;
- (id)_sanitizedError;
- (void)setErrorIfNone:(id)a0;
- (void)addInfoFromDictionary:(id)a0;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)baseVersionNeeded;
- (BOOL)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (id)errorInfoKey;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;

@end

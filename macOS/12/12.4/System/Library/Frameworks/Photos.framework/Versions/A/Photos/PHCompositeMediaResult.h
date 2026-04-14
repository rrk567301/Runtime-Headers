@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isInCloud;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;
- (id)error;
- (id)info;
- (void)setError:(id)a0;
- (id)imageData;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageProperties;
- (id)imageURL;
- (id)initWithRequestID:(int)a0;
- (void)clearError;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)setSandboxExtensionToken:(id)a0;
- (id)sandboxExtensionToken;
- (id)uniformTypeIdentifier;
- (id)mediaMetadata;
- (BOOL)containsValidData;
- (id)errorInfoKey;
- (id)cancelledInfoKey;
- (id)inCloudInfoKey;
- (id)allowedInfoKeys;
- (id)_sanitizedError;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (unsigned int)cgOrientation;
- (id)videoURL;
- (id)videoAdjustmentData;
- (id)adjustmentData;
- (BOOL)canHandleAdjustmentData;
- (id)baseVersionNeeded;
- (void)addInfoFromDictionary:(id)a0;
- (void)setErrorIfNone:(id)a0;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;

@end

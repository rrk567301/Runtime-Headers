@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshot : HMFObject

@property (readonly) NSData *imageData;
@property (readonly) HMDVideoResolution *videoResolution;
@property (readonly) HMFOSTransaction *transaction;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 videoResolution:(id)a1 error:(id *)a2;
- (id)initWithImageData:(id)a0 videoResolution:(id)a1 transaction:(id)a2;

@end

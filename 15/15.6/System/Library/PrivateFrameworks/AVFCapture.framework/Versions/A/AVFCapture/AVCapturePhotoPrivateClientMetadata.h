@class NSString, NSDictionary;

@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding> {
    NSDictionary *_inferenceAttachments;
    NSDictionary *_detectedObjectInfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *captureFolderClientPath;
@property (readonly) NSDictionary *inferenceAttachments;
@property (readonly) NSDictionary *detectedObjectInfo;
@property (readonly) unsigned int spatialOverCaptureImageStitchingConfidenceScore;
@property (readonly) char spatialOverCaptureImageHorizonLinePresent;
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadataDictionary:(id)a0;

@end

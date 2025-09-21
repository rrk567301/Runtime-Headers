@class NSString, NSData, NSError, NSNumber;

@interface CMContinuityCaptureStillImageRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long uniqueID;
@property (retain, nonatomic) NSString *compressedFormat;
@property (nonatomic) char highResolutionPhotoEnabled;
@property (nonatomic) int flashMode;
@property (nonatomic) int photoQualityPrioritization;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;
@property (nonatomic) char captureComplete;
@property (retain, nonatomic) NSNumber *networkTimestamp;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *imageFileData;
@property (nonatomic) unsigned int imageCodecType;
@property (nonatomic) int imageWidth;
@property (nonatomic) int imageHeight;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

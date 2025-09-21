@class NSString;

@interface PXDisplayAssetVideoContentDeliveryStrategy : NSObject <NSCopying>

@property (nonatomic) long long quality;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } segmentTimeRange;
@property (nonatomic) char isStreamingAllowed;
@property (nonatomic) char isNetworkAccessAllowed;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) char isAudioAllowed;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;

+ (id)defaultStreamingMediumQualityStrategy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;

@end

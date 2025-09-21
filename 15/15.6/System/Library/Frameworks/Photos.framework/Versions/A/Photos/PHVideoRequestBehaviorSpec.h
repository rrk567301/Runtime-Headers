@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long version;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic, getter=isStreamingAllowed) char streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic, getter=isVideoComplementAllowed) char videoComplementAllowed;
@property (nonatomic, getter=isMediumHighQualityAllowed) char mediumHighQualityAllowed;
@property (nonatomic) char restrictToPlayableOnCurrentDevice;
@property (nonatomic) char restrictToStreamable;
@property (nonatomic) char restrictToEncryptedStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (char)hasValidTimeRange;
- (char)isExplicitUserAction;
- (char)streamingIntentAllowsFallbackToDownload;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end

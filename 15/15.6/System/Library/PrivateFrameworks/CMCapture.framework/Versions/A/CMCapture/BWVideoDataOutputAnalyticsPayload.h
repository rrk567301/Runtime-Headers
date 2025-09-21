@class NSString;

@interface BWVideoDataOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int deviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) char videoMirrored;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) double duration;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) char hdrVideo;
@property (nonatomic) char proresVideo;
@property (nonatomic) unsigned long long numberOfFramesDropped;
@property (nonatomic) unsigned long long numberOfISPFramesDropped;
@property (nonatomic) unsigned long long numberOfFrames;
@property (nonatomic) int colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end

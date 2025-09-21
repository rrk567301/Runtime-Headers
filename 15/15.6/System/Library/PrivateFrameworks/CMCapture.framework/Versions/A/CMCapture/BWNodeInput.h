@class BWNodeConnection, NSString, BWNode, NSArray, BWFormat, NSMutableDictionary, BWVideoFormat, BWNodeInputMediaConfiguration, BWFormatRequirements, BWNodeInputMediaProperties;

@interface BWNodeInput : NSObject <FigCaptureOSStateDataProvider> {
    NSMutableDictionary *_attachedMediaConfigurations;
    NSMutableDictionary *_attachedMediaProperties;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (retain, nonatomic) BWFormat *format;
@property (readonly, nonatomic) BWVideoFormat *videoFormat;
@property (readonly, nonatomic) BWFormat *liveFormat;
@property (nonatomic) int passthroughMode;
@property (nonatomic) char conversionToPassthroughModeNeverAllowed;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (readonly, nonatomic) char mediaTypeIsVideo;
@property (readonly, nonatomic) char mediaTypeIsPointCloud;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int mediaType;
@property (nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) unsigned long long index;
@property (nonatomic) char discardsSampleDataTaggedToBeDropped;
@property (readonly, nonatomic) BWNode *node;
@property (nonatomic) BWNodeConnection *connection;
@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) BWNodeInputMediaConfiguration *primaryMediaConfiguration;
@property (readonly, nonatomic) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeInputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (readonly, nonatomic) BWNodeInputMediaProperties *primaryMediaProperties;
@property (readonly, nonatomic) NSArray *resolvedAttachedMediaKeys;
@property (readonly, nonatomic) long long liveConfigurationID;
@property (readonly, nonatomic) unsigned int numberOfBuffersReceived;
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (struct opaqueCMSampleBuffer { } *)newSampleDataToBeDroppedMarkerBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (void)invalidate;
- (void)handleMessage:(id)a0;
- (void)_clearAllMediaProperties;
- (int)_passthroughModeForAttachedMediaKey:(id)a0;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (void)_setMediaProperties:(id)a0 forAttachedMediaKey:(id)a1;
- (id)initWithMediaType:(unsigned int)a0 node:(id)a1;
- (id)initWithMediaType:(unsigned int)a0 node:(id)a1 index:(unsigned long long)a2;
- (id)mediaConfigurationForAttachedMediaKey:(id)a0;
- (id)mediaPropertiesByAttachedMediaKey;
- (id)mediaPropertiesForAttachedMediaKey:(id)a0;
- (id)osStatePropertyList;
- (void)setMediaConfiguration:(id)a0 forAttachedMediaKey:(id)a1;

@end

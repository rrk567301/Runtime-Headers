@class NSDictionary, NSMutableSet, NSMutableDictionary;

@interface BWPhotoEncoderControllerInput : BWStillImageProcessorControllerInput {
    unsigned int _expectedFramesCount;
}

@property (readonly, nonatomic) char requiresPhotosAdjustment;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sbufToProcess;
@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) unsigned int receivedFramesCount;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *primarySampleBuffer;
@property (nonatomic) char fatalErrorOccurred;
@property (nonatomic) long long reservedPrimaryImageHandle;
@property (nonatomic) long long gainMapHandle;
@property (nonatomic) long long toneMapAlternateGroupHandle;
@property (readonly, nonatomic) char isStereoPhotoCapture;
@property (nonatomic) struct { long long mono; long long left; long long right; } stereoPhotoImageHandles;
@property (nonatomic) unsigned long long monoImageLocationType;
@property (nonatomic) char deltaMapIsValid;
@property (readonly, nonatomic) NSMutableSet *encodedAttachedMediaKeys;
@property (readonly, nonatomic) NSMutableDictionary *stashedAttacheMediaSampleBuffersByAttachedMediaKey;
@property (readonly, nonatomic) NSDictionary *primaryImageMetadataForPrewarming;
@property (readonly, nonatomic) unsigned int processingFlagsForPrewarming;
@property (retain, nonatomic) NSDictionary *decompressStyledBufferAttributes;
@property (readonly, nonatomic) char receivedAllFramesInSingleContainer;

- (void)dealloc;
- (id)description;
- (void)addAuxSbuf:(struct opaqueCMSampleBuffer { } *)a0 attachedMediakey:(id)a1 primaryImageMetadata:(id)a2 processingFlags:(unsigned int)a3;
- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)finishedProcessingSbuf;
- (void)receivedFrame:(struct opaqueCMSampleBuffer { } *)a0 isPrimary:(char)a1;

@end

@interface DRTrack : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (void)setupBindings;
+ (BOOL)isPropertyKey:(id)a0;
+ (id)trackForAudioOfLength:(id)a0 producer:(id)a1;
+ (id)trackForAudioFile:(id)a0;
+ (id)trackForRootFolder:(id)a0;

- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)length;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)setLength:(id)a0;
- (struct DRTrackObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; void /* function */ *x7; void *x8; unsigned int x9; BOOL x10; struct TrackProducer *x11; struct DRSessionObject *x12; } *)_obj;
- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned short)blockSize;
- (id)verificationType;
- (id)initWithProperties:(id)a0 callback:(void /* function */ *)a1;
- (float)_testProductionSpeedForLength:(unsigned int)a0 orInterval:(double)a1;
- (unsigned long long)estimateLength;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (id)initWithProducer:(id)a0;
- (float)testProductionSpeedForInterval:(double)a0;
- (float)testProductionSpeedForLength:(unsigned int)a0;
- (id)preGap;
- (void)setPreGap:(id)a0;
- (int)_estimateSizeCallback:(unsigned long long *)a0;
- (int)_preBurnCallback:(id)a0;
- (int)_producePreGapCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_produceDataCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_verificationStartingCallback;
- (int)_verifyPreGapCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_verifyDataCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_verificationDoneCallback;
- (int)_postBurnCallback;
- (void)setVerificationType:(id)a0;
- (void)setBlockSize:(unsigned short)a0;
- (long long)dataForm;
- (void)setDataForm:(long long)a0;
- (long long)blockType;
- (void)setBlockType:(long long)a0;
- (long long)trackMode;
- (void)setTrackMode:(long long)a0;
- (long long)sessionFormat;
- (void)setSessionFormat:(long long)a0;
- (float)maximumBurnSpeed;
- (void)setMaximumBurnSpeed:(float)a0;
- (id)dvdCopyrightInfo;
- (void)setDVDCopyrightInfo:(id)a0;
- (id)dvdTimestamp;
- (void)setDVDTimestamp:(id)a0;

@end

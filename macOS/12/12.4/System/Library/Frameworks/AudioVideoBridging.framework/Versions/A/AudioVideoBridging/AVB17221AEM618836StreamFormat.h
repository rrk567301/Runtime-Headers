@interface AVB17221AEM618836StreamFormat : AVB17221AEM61883StreamFormat

@property (readonly) unsigned char fdfEvt;
@property unsigned char fdfSfc;
@property unsigned char dbs;
@property (getter=isBlockingMode) BOOL blockingMode;
@property (getter=isNonblockingMode) BOOL nonblockingMode;
@property BOOL upTo;
@property (getter=isSynchronousClock) BOOL synchronousClock;

+ (id)keyPathsForValuesAffectingFdfEvt;
+ (id)keyPathsForValuesAffectingFdfSfc;
+ (id)keyPathsForValuesAffectingDbs;
+ (id)keyPathsForValuesAffectingBlockingMode;
+ (id)keyPathsForValuesAffectingNonblockingMode;
+ (id)keyPathsForValuesAffectingUpTo;
+ (id)keyPathsForValuesAffectingSynchronousClock;

- (id)init;
- (void)setSamplingRate:(id)a0;
- (id)samplingRate;
- (unsigned short)numberOfAudioChannels;
- (void)setBlockingMode:(BOOL)a0;
- (BOOL)isSupportedAudioFormat;
- (void)setUpTo:(BOOL)a0;
- (BOOL)isAudioFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (unsigned char)fdfEvt;
- (unsigned char)fdfSfc;
- (unsigned char)dbs;
- (void)setFdfSfc:(unsigned char)a0;
- (BOOL)upTo;
- (void)setFdfEvt:(unsigned char)a0;
- (void)setDbs:(unsigned char)a0;
- (void)setNonblockingMode:(BOOL)a0;
- (void)setSynchronousClock:(BOOL)a0;

@end

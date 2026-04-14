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
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (void)setBlockingMode:(BOOL)a0;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (void)setFdfEvt:(unsigned char)a0;
- (unsigned char)fdfEvt;
- (void)setFdfSfc:(unsigned char)a0;
- (unsigned char)fdfSfc;
- (void)setDbs:(unsigned char)a0;
- (unsigned char)dbs;
- (void)setNonblockingMode:(BOOL)a0;
- (void)setUpTo:(BOOL)a0;
- (BOOL)upTo;
- (void)setSynchronousClock:(BOOL)a0;

@end

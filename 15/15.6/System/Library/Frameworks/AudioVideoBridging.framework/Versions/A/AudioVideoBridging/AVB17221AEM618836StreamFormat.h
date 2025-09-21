@interface AVB17221AEM618836StreamFormat : AVB17221AEM61883StreamFormat

@property (readonly) unsigned char fdfEvt;
@property unsigned char fdfSfc;
@property unsigned char dbs;
@property (getter=isBlockingMode) char blockingMode;
@property (getter=isNonblockingMode) char nonblockingMode;
@property char upTo;
@property (getter=isSynchronousClock) char synchronousClock;

+ (id)keyPathsForValuesAffectingBlockingMode;
+ (id)keyPathsForValuesAffectingDbs;
+ (id)keyPathsForValuesAffectingFdfEvt;
+ (id)keyPathsForValuesAffectingFdfSfc;
+ (id)keyPathsForValuesAffectingNonblockingMode;
+ (id)keyPathsForValuesAffectingSynchronousClock;
+ (id)keyPathsForValuesAffectingUpTo;

- (id)init;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (void)setBlockingMode:(char)a0;
- (unsigned char)dbs;
- (void)setDbs:(unsigned char)a0;
- (unsigned char)fdfEvt;
- (unsigned char)fdfSfc;
- (id)formatsByExpandingFormat;
- (char)isAudioFormat;
- (char)isCompatibleAsListenerForFormat:(id)a0;
- (char)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (char)isSupportedFormat;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)packetRate;
- (void)setFdfEvt:(unsigned char)a0;
- (void)setFdfSfc:(unsigned char)a0;
- (void)setNonblockingMode:(char)a0;
- (void)setSynchronousClock:(char)a0;
- (void)setUpTo:(char)a0;
- (char)upTo;

@end

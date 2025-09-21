@class NSString;

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _frameErasureRateHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _jitterBufferResidencyTimeHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _jitterBufferUnderflowRateHistograms;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rtpPacketLossRateHistograms;
    struct { unsigned char timestamp : 1; unsigned char dlVocoderBitRate : 1; unsigned char frameErasureRateMean : 1; unsigned char jitterBufferResidencyTime95Percentile : 1; unsigned char jitterBufferResidencyTimeMean : 1; unsigned char jitterBufferResidencyTimeMedian : 1; unsigned char jitterBufferUnderflowRateMean : 1; unsigned char ratType : 1; unsigned char rtpPacketLossRateMean : 1; unsigned char ulVocoderBitRate : 1; unsigned char vocoderSampleRate : 1; unsigned char vocoderType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasCallID;
@property (retain, nonatomic) NSString *callID;
@property (readonly, nonatomic) unsigned long long rtpPacketLossRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *rtpPacketLossRateHistograms;
@property (readonly, nonatomic) unsigned long long jitterBufferUnderflowRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *jitterBufferUnderflowRateHistograms;
@property (readonly, nonatomic) unsigned long long frameErasureRateHistogramsCount;
@property (readonly, nonatomic) unsigned int *frameErasureRateHistograms;
@property (readonly, nonatomic) unsigned long long jitterBufferResidencyTimeHistogramsCount;
@property (readonly, nonatomic) unsigned int *jitterBufferResidencyTimeHistograms;
@property (nonatomic) char hasRtpPacketLossRateMean;
@property (nonatomic) unsigned int rtpPacketLossRateMean;
@property (nonatomic) char hasJitterBufferUnderflowRateMean;
@property (nonatomic) unsigned int jitterBufferUnderflowRateMean;
@property (nonatomic) char hasFrameErasureRateMean;
@property (nonatomic) unsigned int frameErasureRateMean;
@property (nonatomic) char hasJitterBufferResidencyTimeMean;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMean;
@property (nonatomic) char hasJitterBufferResidencyTimeMedian;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMedian;
@property (nonatomic) char hasJitterBufferResidencyTime95Percentile;
@property (nonatomic) unsigned int jitterBufferResidencyTime95Percentile;
@property (nonatomic) char hasRatType;
@property (nonatomic) unsigned int ratType;
@property (nonatomic) char hasVocoderType;
@property (nonatomic) unsigned int vocoderType;
@property (nonatomic) char hasVocoderSampleRate;
@property (nonatomic) unsigned int vocoderSampleRate;
@property (nonatomic) char hasUlVocoderBitRate;
@property (nonatomic) unsigned int ulVocoderBitRate;
@property (nonatomic) char hasDlVocoderBitRate;
@property (nonatomic) unsigned int dlVocoderBitRate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearFrameErasureRateHistograms;
- (void)addFrameErasureRateHistogram:(unsigned int)a0;
- (void)addJitterBufferResidencyTimeHistogram:(unsigned int)a0;
- (void)addJitterBufferUnderflowRateHistogram:(unsigned int)a0;
- (void)addRtpPacketLossRateHistogram:(unsigned int)a0;
- (void)clearJitterBufferResidencyTimeHistograms;
- (void)clearJitterBufferUnderflowRateHistograms;
- (void)clearRtpPacketLossRateHistograms;
- (unsigned int)frameErasureRateHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)jitterBufferResidencyTimeHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)jitterBufferUnderflowRateHistogramAtIndex:(unsigned long long)a0;
- (unsigned int)rtpPacketLossRateHistogramAtIndex:(unsigned long long)a0;
- (void)setFrameErasureRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJitterBufferResidencyTimeHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setJitterBufferUnderflowRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRtpPacketLossRateHistograms:(unsigned int *)a0 count:(unsigned long long)a1;

@end

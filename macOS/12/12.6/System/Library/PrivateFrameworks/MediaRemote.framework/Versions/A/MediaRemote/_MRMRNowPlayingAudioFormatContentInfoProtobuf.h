@class NSString;

@interface _MRMRNowPlayingAudioFormatContentInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char audioFormat : 1; unsigned char audioSessionID : 1; unsigned char channelCount : 1; unsigned char eligibleForSpatialization : 1; unsigned char spatialized : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasAudioSessionID;
@property (nonatomic) unsigned long long audioSessionID;
@property (nonatomic) BOOL hasAudioFormat;
@property (nonatomic) unsigned long long audioFormat;
@property (nonatomic) BOOL hasChannelCount;
@property (nonatomic) unsigned long long channelCount;
@property (readonly, nonatomic) BOOL hasBestAvailableContent;
@property (retain, nonatomic) NSString *bestAvailableContent;
@property (nonatomic) BOOL hasEligibleForSpatialization;
@property (nonatomic) BOOL eligibleForSpatialization;
@property (nonatomic) BOOL hasSpatialized;
@property (nonatomic) BOOL spatialized;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end

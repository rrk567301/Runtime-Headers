@class NSString;

@interface _MRMRNowPlayingAudioFormatContentInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char audioFormat : 1; unsigned char audioSessionID : 1; unsigned char channelCount : 1; unsigned char intendedSpatialExperience : 1; unsigned char pid : 1; unsigned char renderingMode : 1; unsigned char resolvedSpatialExperience : 1; unsigned char eligibleForSpatialization : 1; unsigned char spatialized : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasAudioSessionID;
@property (nonatomic) unsigned long long audioSessionID;
@property (nonatomic) char hasAudioFormat;
@property (nonatomic) unsigned long long audioFormat;
@property (nonatomic) char hasChannelCount;
@property (nonatomic) unsigned long long channelCount;
@property (readonly, nonatomic) char hasBestAvailableContent;
@property (retain, nonatomic) NSString *bestAvailableContent;
@property (nonatomic) char hasEligibleForSpatialization;
@property (nonatomic) char eligibleForSpatialization;
@property (nonatomic) char hasSpatialized;
@property (nonatomic) char spatialized;
@property (nonatomic) char hasIntendedSpatialExperience;
@property (nonatomic) long long intendedSpatialExperience;
@property (nonatomic) char hasResolvedSpatialExperience;
@property (nonatomic) long long resolvedSpatialExperience;
@property (nonatomic) char hasPid;
@property (nonatomic) unsigned long long pid;
@property (nonatomic) char hasRenderingMode;
@property (nonatomic) long long renderingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

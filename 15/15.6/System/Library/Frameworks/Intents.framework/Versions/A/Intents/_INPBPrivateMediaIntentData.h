@class _INPBWholeHouseAudioMetadata, NSString, _INPBSpeakerIDInfo, _INPBHomeAutomationEntityProvider, _INPBAppIdentifier, _INPBString;

@interface _INPBPrivateMediaIntentData : PBCodable <_INPBPrivateMediaIntentData, NSSecureCoding, NSCopying> {
    struct { unsigned char asrConfidenceLevel : 1; unsigned char asrConfidenceScore : 1; unsigned char isAppAttributionRequired : 1; unsigned char isAppCorrection : 1; unsigned char nlConfidenceLevel : 1; unsigned char nlConfidenceScore : 1; unsigned char useDialogMemoryForAttribution : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int asrConfidenceLevel;
@property (nonatomic) char hasAsrConfidenceLevel;
@property (nonatomic) float asrConfidenceScore;
@property (nonatomic) char hasAsrConfidenceScore;
@property (retain, nonatomic) _INPBString *fallbackUsername;
@property (readonly, nonatomic) char hasFallbackUsername;
@property (retain, nonatomic) _INPBHomeAutomationEntityProvider *homeAutomationEntityProvider;
@property (readonly, nonatomic) char hasHomeAutomationEntityProvider;
@property (nonatomic) char isAppAttributionRequired;
@property (nonatomic) char hasIsAppAttributionRequired;
@property (nonatomic) char isAppCorrection;
@property (nonatomic) char hasIsAppCorrection;
@property (nonatomic) int nlConfidenceLevel;
@property (nonatomic) char hasNlConfidenceLevel;
@property (nonatomic) float nlConfidenceScore;
@property (nonatomic) char hasNlConfidenceScore;
@property (retain, nonatomic) _INPBAppIdentifier *proxiedThirdPartyAppInfo;
@property (readonly, nonatomic) char hasProxiedThirdPartyAppInfo;
@property (retain, nonatomic) _INPBString *resolvedSharedUserID;
@property (readonly, nonatomic) char hasResolvedSharedUserID;
@property (retain, nonatomic) _INPBSpeakerIDInfo *speakerIDInfo;
@property (readonly, nonatomic) char hasSpeakerIDInfo;
@property (nonatomic) char useDialogMemoryForAttribution;
@property (nonatomic) char hasUseDialogMemoryForAttribution;
@property (retain, nonatomic) _INPBWholeHouseAudioMetadata *wholeHouseAudioMetadata;
@property (readonly, nonatomic) char hasWholeHouseAudioMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAsrConfidenceLevel:(id)a0;
- (int)StringAsNlConfidenceLevel:(id)a0;
- (id)asrConfidenceLevelAsString:(int)a0;
- (id)nlConfidenceLevelAsString:(int)a0;

@end

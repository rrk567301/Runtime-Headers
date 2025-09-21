@class NSNumber, NSString, INWholeHouseAudioMetadata, INHomeAutomationEntityProvider, INSpeakerIDInfo, INAppIdentifier;

@interface INPrivateMediaIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) INSpeakerIDInfo *speakerIDInfo;
@property (copy) INAppIdentifier *proxiedThirdPartyAppInfo;
@property (copy) NSNumber *isAppAttributionRequired;
@property (copy) NSNumber *useDialogMemoryForAttribution;
@property (copy) NSString *fallbackUsername;
@property (copy) NSString *resolvedSharedUserID;
@property (readonly, copy) NSNumber *isAppCorrection;
@property (readonly, copy) INWholeHouseAudioMetadata *wholeHouseAudioMetadata;
@property (readonly, copy) NSNumber *nlConfidenceScore;
@property (readonly) long long nlConfidenceLevel;
@property (readonly, copy) NSNumber *asrConfidenceScore;
@property (readonly) long long asrConfidenceLevel;
@property (readonly, copy) INHomeAutomationEntityProvider *homeAutomationEntityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithSpeakerIDInfo:(id)a0 proxiedThirdPartyAppInfo:(id)a1 isAppAttributionRequired:(id)a2 useDialogMemoryForAttribution:(id)a3 isAppCorrection:(id)a4 fallbackUsername:(id)a5 wholeHouseAudioMetadata:(id)a6 nlConfidenceScore:(id)a7 nlConfidenceLevel:(long long)a8 asrConfidenceScore:(id)a9 asrConfidenceLevel:(long long)a10;
- (id)initWithSpeakerIDInfo:(id)a0 proxiedThirdPartyAppInfo:(id)a1 isAppAttributionRequired:(id)a2 useDialogMemoryForAttribution:(id)a3 isAppCorrection:(id)a4 fallbackUsername:(id)a5 wholeHouseAudioMetadata:(id)a6 nlConfidenceScore:(id)a7 nlConfidenceLevel:(long long)a8 asrConfidenceScore:(id)a9 asrConfidenceLevel:(long long)a10 resolvedSharedUserID:(id)a11;
- (id)initWithSpeakerIDInfo:(id)a0 proxiedThirdPartyAppInfo:(id)a1 isAppAttributionRequired:(id)a2 useDialogMemoryForAttribution:(id)a3 isAppCorrection:(id)a4 fallbackUsername:(id)a5 wholeHouseAudioMetadata:(id)a6 nlConfidenceScore:(id)a7 nlConfidenceLevel:(long long)a8 asrConfidenceScore:(id)a9 asrConfidenceLevel:(long long)a10 resolvedSharedUserID:(id)a11 homeAutomationEntityProvider:(id)a12;

@end

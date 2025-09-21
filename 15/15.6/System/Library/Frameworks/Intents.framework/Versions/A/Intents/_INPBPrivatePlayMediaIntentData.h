@class _INPBPrivateMediaIntentData, NSArray, NSString, NSData, _INPBString;

@interface _INPBPrivatePlayMediaIntentData : PBCodable <_INPBPrivatePlayMediaIntentData, NSSecureCoding, NSCopying> {
    struct { unsigned char appInferred : 1; unsigned char appSelectionEnabled : 1; unsigned char appSelectionSignalsEnabled : 1; unsigned char appSelectionSignalsFrequencyDenominator : 1; unsigned char entityConfidenceSignalsEnabled : 1; unsigned char entityConfidenceSignalsFrequencyDenominatorInternal : 1; unsigned char entityConfidenceSignalsFrequencyDenominatorProd : 1; unsigned char entityConfidenceSignalsMaxItemsToDisambiguate : 1; unsigned char immediatelyStartPlayback : 1; unsigned char isAmbiguousPlay : 1; unsigned char isPersonalizedRequest : 1; unsigned char shouldSuppressCommonWholeHouseAudioRoutes : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *alternativeProviderBundleIdentifier;
@property (readonly, nonatomic) char hasAlternativeProviderBundleIdentifier;
@property (retain, nonatomic) _INPBString *ampPAFDataSetID;
@property (readonly, nonatomic) char hasAmpPAFDataSetID;
@property (nonatomic) char appInferred;
@property (nonatomic) char hasAppInferred;
@property (nonatomic) char appSelectionEnabled;
@property (nonatomic) char hasAppSelectionEnabled;
@property (nonatomic) char appSelectionSignalsEnabled;
@property (nonatomic) char hasAppSelectionSignalsEnabled;
@property (nonatomic) int appSelectionSignalsFrequencyDenominator;
@property (nonatomic) char hasAppSelectionSignalsFrequencyDenominator;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (nonatomic) char entityConfidenceSignalsEnabled;
@property (nonatomic) char hasEntityConfidenceSignalsEnabled;
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic) char hasEntityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic) int entityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic) char hasEntityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic) int entityConfidenceSignalsMaxItemsToDisambiguate;
@property (nonatomic) char hasEntityConfidenceSignalsMaxItemsToDisambiguate;
@property (nonatomic) char immediatelyStartPlayback;
@property (nonatomic) char hasImmediatelyStartPlayback;
@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (nonatomic) char isAmbiguousPlay;
@property (nonatomic) char hasIsAmbiguousPlay;
@property (nonatomic) char isPersonalizedRequest;
@property (nonatomic) char hasIsPersonalizedRequest;
@property (copy, nonatomic) NSData *pegasusMetaData;
@property (readonly, nonatomic) char hasPegasusMetaData;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, nonatomic) char hasPrivateMediaIntentData;
@property (nonatomic) char shouldSuppressCommonWholeHouseAudioRoutes;
@property (nonatomic) char hasShouldSuppressCommonWholeHouseAudioRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)audioSearchResultsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAudioSearchResults:(id)a0;
- (void)addInternalSignal:(id)a0;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (id)internalSignalAtIndex:(unsigned long long)a0;

@end

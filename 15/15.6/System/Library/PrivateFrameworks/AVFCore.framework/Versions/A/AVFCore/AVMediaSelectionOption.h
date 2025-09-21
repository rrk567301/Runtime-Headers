@class NSString, NSArray, NSLocale, NSNumber, AVMediaSelectionOptionInternal;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *unicodeLanguageIdentifier;
@property (readonly, nonatomic) NSString *unicodeLanguageCode;
@property (readonly, nonatomic, getter=_audioCompositionPresetIndex) NSNumber *audioCompositionPresetIndex;
@property (readonly, nonatomic, getter=_audioCompositionPresetIndexesForFallbackIDs) NSArray *audioCompositionPresetIndexesForFallbackIDs;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *mediaSubTypes;
@property (readonly, nonatomic, getter=isPlayable) char playable;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSString *displayName;

+ (char)_plistHasOptionIdentifier:(id)a0;
+ (id)mediaSelectionNilOptionForGroup:(id)a0;
+ (id)mediaSelectionOptionForAsset:(id)a0 group:(id)a1 dictionary:(id)a2 hasUnderlyingTrack:(char)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)dictionary;
- (id)languageCode;
- (id)propertyList;
- (id)group;
- (id)initWithGroup:(id)a0;
- (id)_groupMediaType;
- (id)outOfBandSource;
- (id)_ancillaryDescription;
- (id)_displayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(char)a1;
- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (char)_isAuxiliaryContent;
- (char)_isDesignatedDefault;
- (char)_isMainProgramContent;
- (id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(char)a1;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(char)a1 excludeM3U8Metadata:(char)a2;
- (char)_representsNilSelection;
- (id)_taggedMediaCharacteristics;
- (id)_title;
- (id)_track;
- (char)_updateDisplayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(char)a1 context:(long long)a2;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)associatedPersistentIDs;
- (id)associatedUnicodeLanguageIdentifier;
- (id)displayNameWithLocale:(id)a0;
- (char)displaysNonForcedSubtitles;
- (id)fallbackIDs;
- (char)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)metadataForFormat:(id)a0;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)track;

@end

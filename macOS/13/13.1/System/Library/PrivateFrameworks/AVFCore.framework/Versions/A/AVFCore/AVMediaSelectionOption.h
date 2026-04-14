@class NSString, NSArray, NSLocale, AVMediaSelectionOptionInternal;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *unicodeLanguageIdentifier;
@property (readonly, nonatomic) NSString *unicodeLanguageCode;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *mediaSubTypes;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)_plistHasOptionIdentifier:(id)a0;
+ (id)mediaSelectionOptionForAsset:(id)a0 group:(id)a1 dictionary:(id)a2 hasUnderlyingTrack:(BOOL)a3;
+ (id)mediaSelectionNilOptionForGroup:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (id)languageCode;
- (id)propertyList;
- (id)group;
- (id)_title;
- (id)_groupID;
- (id)initWithGroup:(id)a0;
- (id)metadataForFormat:(id)a0;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)_track;
- (id)track;
- (id)_ancillaryDescription;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)_groupMediaType;
- (id)_groupMediaCharacteristics;
- (id)optionID;
- (BOOL)_isMainProgramContent;
- (id)_taggedMediaCharacteristics;
- (id)associatedExtendedLanguageTag;
- (id)associatedUnicodeLanguageIdentifier;
- (id)associatedPersistentIDs;
- (id)fallbackIDs;
- (BOOL)_representsNilSelection;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1 excludeM3U8Metadata:(BOOL)a2;
- (id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1;
- (id)_displayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)a1;
- (BOOL)_updateDisplayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)a1 context:(long long)a2;
- (id)displayNameWithLocale:(id)a0;
- (id)outOfBandSource;
- (id)outOfBandIdentifier;

@end

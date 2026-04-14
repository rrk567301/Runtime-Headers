@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (void).cxx_destruct;
- (id)locale;
- (id)languageCode;
- (id).cxx_construct;
- (id)propertyList;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)track;
- (id)mediaSubTypes;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)displayNameWithLocale:(id)a0;
- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (id)initWithMediaType:(id)a0 displayName:(id)a1;

@end

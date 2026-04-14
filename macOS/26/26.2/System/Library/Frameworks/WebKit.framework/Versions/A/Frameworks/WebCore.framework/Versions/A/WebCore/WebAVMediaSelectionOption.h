@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (id)locale;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)languageCode;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isPlayable;
- (id)propertyList;
- (id)outOfBandSource;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)displayNameWithLocale:(id)a0;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)outOfBandIdentifier;
- (id)track;
- (id)initWithMediaType:(id)a0 displayName:(id)a1;

@end

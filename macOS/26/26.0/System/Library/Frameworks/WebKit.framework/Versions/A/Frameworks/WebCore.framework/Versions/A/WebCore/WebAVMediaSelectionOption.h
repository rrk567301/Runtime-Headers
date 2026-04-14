@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)locale;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id).cxx_construct;
- (void).cxx_destruct;
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

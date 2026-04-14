@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (id)commonMetadata;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)availableMetadataFormats;
- (id)propertyList;
- (id)languageCode;
- (id)extendedLanguageTag;
- (void).cxx_destruct;
- (id)locale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
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

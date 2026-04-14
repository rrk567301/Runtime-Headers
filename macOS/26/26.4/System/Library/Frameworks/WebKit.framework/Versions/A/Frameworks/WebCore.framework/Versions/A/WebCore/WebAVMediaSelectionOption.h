@class NSString, NSLocale;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _localizedDisplayName;
    struct RetainPtr<NSString *> { NSString *m_ptr; } _mediaType;
    struct RetainPtr<NSString> { NSString *m_ptr; } _extendedLanguageTag;
    struct RetainPtr<NSLocale> { NSLocale *m_ptr; } _locale;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) long long tag;

- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (id)languageCode;
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
- (id)initWithMediaType:(id)a0 displayName:(id)a1 extendedLanguageTag:(id)a2 tag:(long long)a3;

@end

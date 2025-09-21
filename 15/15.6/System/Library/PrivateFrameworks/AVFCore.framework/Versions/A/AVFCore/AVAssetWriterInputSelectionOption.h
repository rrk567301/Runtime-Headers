@class NSString, NSDictionary, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    char _enabled;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *sourceFormatHint;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (readonly, nonatomic) char displaysNonForcedSubtitles;
@property (readonly, nonatomic) AVAssetWriterInput *input;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)a0;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)a0 displaysNonForcedSubtitles:(char)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)locale;
- (id)propertyList;
- (id)_ancillaryDescription;
- (char)_hasEqualValueForKey:(id)a0 asObject:(id)a1;
- (char)_isAuxiliaryContent;
- (char)_isDesignatedDefault;
- (id)_taggedCharacteristics;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)initWithAssetWriterInput:(id)a0;
- (id)initWithAssetWriterInput:(id)a0 displaysNonForcedSubtitles:(char)a1;
- (char)isPlayable;
- (id)mediaSubTypes;
- (id)metadataForFormat:(id)a0;

@end

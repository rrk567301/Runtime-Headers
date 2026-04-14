@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)dictionary;
- (id)locale;
- (id)group;
- (id)mediaType;
- (id)_groupID;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)_groupMediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;

@end

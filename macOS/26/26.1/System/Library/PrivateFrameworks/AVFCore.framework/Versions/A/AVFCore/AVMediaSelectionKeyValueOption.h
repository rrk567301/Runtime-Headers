@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)group;
- (id)locale;
- (unsigned long long)hash;
- (id)dictionary;
- (id)_groupMediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (void)dealloc;
- (id)mediaType;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;

@end

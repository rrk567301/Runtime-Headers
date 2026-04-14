@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionary;
- (id)locale;
- (id)group;
- (id)_groupID;
- (id)mediaType;
- (id)_groupMediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;

@end

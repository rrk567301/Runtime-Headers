@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)locale;
- (BOOL)isPlayable;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)metadataForFormat:(id)a0;
- (void)dealloc;
- (id)_groupID;
- (id)mediaType;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_groupMediaType;

@end

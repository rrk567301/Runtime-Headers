@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)locale;
- (id)group;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (id)_groupMediaType;
- (id)dictionary;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlayable;
- (id)_groupID;
- (id)mediaType;
- (void)dealloc;

@end

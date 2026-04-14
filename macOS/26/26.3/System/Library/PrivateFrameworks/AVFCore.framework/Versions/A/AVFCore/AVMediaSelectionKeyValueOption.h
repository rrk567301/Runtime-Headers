@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)_groupMediaType;
- (id)group;
- (id)commonMetadata;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)_groupID;
- (id)availableMetadataFormats;
- (id)mediaType;
- (id)dictionary;
- (void)dealloc;
- (id)locale;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (unsigned long long)hash;

@end

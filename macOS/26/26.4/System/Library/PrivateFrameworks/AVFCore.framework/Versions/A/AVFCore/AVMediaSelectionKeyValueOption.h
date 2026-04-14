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
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)group;
- (id)mediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)_groupMediaType;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)locale;
- (unsigned long long)hash;
- (id)dictionary;
- (void)dealloc;

@end

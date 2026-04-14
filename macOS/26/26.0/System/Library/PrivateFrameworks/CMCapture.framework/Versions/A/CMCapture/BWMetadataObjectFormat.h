@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)a0;

- (id)debugDescription;
- (void)dealloc;
- (unsigned int)mediaType;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

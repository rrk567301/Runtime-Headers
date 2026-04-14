@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (unsigned int)mediaType;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end

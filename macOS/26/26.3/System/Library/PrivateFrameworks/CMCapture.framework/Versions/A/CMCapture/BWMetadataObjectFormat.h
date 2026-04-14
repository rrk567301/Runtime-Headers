@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned int)mediaType;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

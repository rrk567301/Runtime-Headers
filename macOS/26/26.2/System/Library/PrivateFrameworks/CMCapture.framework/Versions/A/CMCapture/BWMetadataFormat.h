@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (id)debugDescription;
- (id)description;
- (unsigned int)mediaType;
- (void)dealloc;

@end

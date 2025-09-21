@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (id)debugDescription;
- (void)dealloc;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (id)description;

@end

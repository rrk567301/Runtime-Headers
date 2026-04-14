@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (void)initialize;

- (id)description;
- (void)dealloc;
- (unsigned int)mediaType;
- (id)debugDescription;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end

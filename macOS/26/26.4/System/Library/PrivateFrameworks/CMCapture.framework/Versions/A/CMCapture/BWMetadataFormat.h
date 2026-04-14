@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (id)debugDescription;
- (unsigned int)mediaType;
- (id)description;
- (void)dealloc;

@end

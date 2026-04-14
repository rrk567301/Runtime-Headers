@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (id)debugDescription;
- (id)description;
- (unsigned int)mediaType;
- (void)dealloc;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end

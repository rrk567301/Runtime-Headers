@interface CCTypedIndexedFieldConfiguration : CCIndexedFieldConfiguration {
    unsigned char _type;
}

+ (id)configurationWithFieldType:(unsigned short)a0 dataType:(unsigned char)a1 indexedFieldType:(unsigned char)a2 descriptorAllowList:(id)a3;

- (unsigned char)indexedFieldType;

@end

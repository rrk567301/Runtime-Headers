@interface CCTypeIdentifierRegistry : CCTypeIdentifierRegistryBase

+ (id)setIdentifierForItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForFieldIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemIdentifier:(unsigned short)a0;

@end

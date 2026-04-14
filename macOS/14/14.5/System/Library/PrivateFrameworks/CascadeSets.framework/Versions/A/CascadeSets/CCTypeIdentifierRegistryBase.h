@interface CCTypeIdentifierRegistryBase : NSObject <CCTypeIdentifierRegistryProtocolPrivate, CCTypeIdentifierRegistryProtocol>

+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (id)setIdentifierForItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemType:(unsigned short)a0;
+ (BOOL)isValidFieldIdentifier:(unsigned short)a0;
+ (BOOL)isValidFieldType:(unsigned short)a0;
+ (BOOL)isValidItemIdentifier:(unsigned short)a0;
+ (BOOL)isValidItemType:(unsigned short)a0;
+ (unsigned short)itemIdentifierForFieldIdentifier:(unsigned short)a0 error:(id *)a1;
+ (Class)itemMessageSubclassForFieldIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForFieldType:(unsigned short)a0;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemIdentifier:(unsigned short)a0;
+ (unsigned short)itemTypeForFieldType:(unsigned short)a0 error:(id *)a1;

@end

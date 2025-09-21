@interface PFMetadataUtilities : NSObject

+ (char)addMakerApplePropertyWithKey:(id)a0 value:(id)a1 toProperties:(id)a2;
+ (char)addQuickTimeMetadataItemsWithIdentifier:(id)a0 value:(id)a1 toItems:(id)a2;
+ (id)itemsByRemovingMetadataItemForIdentifier:(id)a0 fromArray:(id)a1;
+ (id)mutableImagePropertyDictionaryForMetadata:(id)a0;

@end

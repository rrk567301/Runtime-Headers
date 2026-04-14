@class NSString, NSDictionary, NSNumber, KVItemBuilder;

@interface KMMapper_INVocabularyItem : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    unsigned int _itemCounter;
    NSDictionary *_intentSlotToFieldTypeMap;
    NSNumber *_intentSlotNameKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

@end

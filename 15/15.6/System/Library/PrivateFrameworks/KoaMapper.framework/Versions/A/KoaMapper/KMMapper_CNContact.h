@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_CNContact : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_meCardIdentifierKey;
    NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (long long)targetItemType;
- (char)_addLabeledFieldsOfType:(long long)a0 labeledValues:(id)a1 labelOnly:(char)a2 error:(id *)a3;

@end

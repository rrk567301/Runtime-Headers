@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_CNContact : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (long long)targetItemType;
- (id)init;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (BOOL)_addLabeledFieldsOfType:(long long)a0 labeledValues:(id)a1 labelOnly:(BOOL)a2 excludeDefault:(BOOL)a3 error:(id *)a4;

@end

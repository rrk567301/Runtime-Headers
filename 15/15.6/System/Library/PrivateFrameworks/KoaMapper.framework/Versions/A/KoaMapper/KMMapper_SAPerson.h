@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_SAPerson : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_sharedUserIdKey;
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
- (char)_addLabeledFieldsForPhones:(id)a0 error:(id *)a1;
- (char)_addLabeledFieldsForRelatedNames:(id)a0 error:(id *)a1;
- (char)_addLabeledFieldsForEmails:(id)a0 error:(id *)a1;
- (char)_addLabeledFieldsForPostalAddresses:(id)a0 error:(id *)a1;

@end

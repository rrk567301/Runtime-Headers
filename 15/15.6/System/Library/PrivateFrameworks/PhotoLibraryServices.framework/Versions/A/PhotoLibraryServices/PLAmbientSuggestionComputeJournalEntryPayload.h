@interface PLAmbientSuggestionComputeJournalEntryPayload : PLSuggestionComputeJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)payloadClassID;
+ (id)snapshotSortDescriptors;
+ (id)supportedSuggestionTypes;

@end

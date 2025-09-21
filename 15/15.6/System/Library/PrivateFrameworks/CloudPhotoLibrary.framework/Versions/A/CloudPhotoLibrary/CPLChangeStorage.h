@class NSString;

@interface CPLChangeStorage : NSObject

@property (readonly, nonatomic) NSString *storageDescription;

- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (char)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (char)getStoredChangeType:(unsigned long long *)a0 forRecordWithScopedIdentifier:(id)a1;
- (char)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;

@end

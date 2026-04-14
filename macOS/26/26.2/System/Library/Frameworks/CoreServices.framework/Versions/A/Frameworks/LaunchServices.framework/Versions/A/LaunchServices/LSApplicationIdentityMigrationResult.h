@class NSMutableDictionary;

@interface LSApplicationIdentityMigrationResult : NSObject {
    NSMutableDictionary *_migratedIdentities;
}

- (void).cxx_destruct;
- (id)init;
- (id)bestMigratedIdentityForIdentity:(id)a0;
- (id)migratedIdentitiesForIdentity:(id)a0;

@end

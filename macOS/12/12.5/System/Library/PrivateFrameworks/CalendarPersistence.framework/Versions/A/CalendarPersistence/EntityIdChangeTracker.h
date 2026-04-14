@class NSString, NSMutableDictionary;

@interface EntityIdChangeTracker : NSObject {
    NSMutableDictionary *oldById;
    NSMutableDictionary *oldByIdentity;
    NSString *entityName;
}

+ (id)objectIdentityOf:(id)a0;

- (id)init;
- (void)extractAllIdsAndIdentities:(id)a0;
- (void)findChangedIds:(id)a0;
- (id)getIdentityString:(id)a0;
- (id)fetchAll;
- (id)getObjectID:(id)a0;
- (void)extractExtraInfo:(id)a0 withId:(id)a1;
- (void)remap:(id)a0 to:(id)a1 forObject:(id)a2 into:(id)a3;
- (void)removeKey:(id)a0 forObject:(id)a1 into:(id)a2;

@end

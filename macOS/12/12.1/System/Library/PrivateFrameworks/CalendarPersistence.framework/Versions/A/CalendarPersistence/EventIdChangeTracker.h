@class NSMutableSet;

@interface EventIdChangeTracker : EntityIdChangeTracker {
    NSMutableSet *hasRecurrence;
    NSMutableSet *hasOrganizer;
}

- (id)init;
- (id)getIdentityString:(id)a0;
- (void)extractExtraInfo:(id)a0 withId:(id)a1;
- (void)remap:(id)a0 to:(id)a1 forObject:(id)a2 into:(id)a3;
- (void)removeKey:(id)a0 forObject:(id)a1 into:(id)a2;
- (BOOL)hasRecurrence:(id)a0;
- (BOOL)hasOrganizer:(id)a0;

@end

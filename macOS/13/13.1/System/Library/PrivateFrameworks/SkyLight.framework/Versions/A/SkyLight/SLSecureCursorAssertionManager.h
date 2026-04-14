@class NSMapTable, NSHashTable;

@interface SLSecureCursorAssertionManager : NSObject

@property (readonly, nonatomic) NSHashTable *strongAssertionUUIDs;
@property (readonly, nonatomic) NSMapTable *weakAssertionMap;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)invalidateAll;
- (id)takeAssertion;
- (void)invalidateUUID:(id)a0;
- (void)unmapUUID:(id)a0;

@end

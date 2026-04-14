@class NSMapTable, NSHashTable;

@interface SLSecureCursorAssertionManager : NSObject

@property (readonly, nonatomic) NSHashTable *strongAssertionUUIDs;
@property (readonly, nonatomic) NSMapTable *weakAssertionMap;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)unmapUUID:(id)a0;
- (id)takeAssertion;
- (void)invalidateUUID:(id)a0;
- (void)invalidateAll;

@end

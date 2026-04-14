@class NSMapTable, NSHashTable;

@interface SLSecureCursorAssertionManager : NSObject

@property (readonly, nonatomic) NSHashTable *strongAssertionUUIDs;
@property (readonly, nonatomic) NSMapTable *weakAssertionMap;

+ (id)sharedManager;

- (id)init;
- (id)takeAssertion;
- (void)dealloc;
- (void)invalidateUUID:(id)a0;
- (void)invalidateAll;
- (void)unmapUUID:(id)a0;

@end

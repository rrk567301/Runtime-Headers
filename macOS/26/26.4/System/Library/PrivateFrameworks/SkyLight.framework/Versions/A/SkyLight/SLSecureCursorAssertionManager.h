@class NSMapTable, NSHashTable;

@interface SLSecureCursorAssertionManager : NSObject

@property (readonly, nonatomic) NSHashTable *strongAssertionUUIDs;
@property (readonly, nonatomic) NSMapTable *weakAssertionMap;

+ (id)sharedManager;

- (id)takeAssertion;
- (id)init;
- (void)dealloc;
- (void)invalidateUUID:(id)a0;
- (void)invalidateAll;
- (void)unmapUUID:(id)a0;

@end

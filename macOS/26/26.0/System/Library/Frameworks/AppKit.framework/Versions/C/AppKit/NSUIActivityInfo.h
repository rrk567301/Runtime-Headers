@class NSArray, NSHashTable;

@interface NSUIActivityInfo : NSObject {
    NSHashTable *_providers;
}

@property (readonly, copy) NSArray *providers;
@property (getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly) unsigned long long providerCount;

- (id)providers;
- (void)removeProvider:(id)a0;
- (void)dealloc;
- (id)init;
- (void)addProvider:(id)a0;

@end

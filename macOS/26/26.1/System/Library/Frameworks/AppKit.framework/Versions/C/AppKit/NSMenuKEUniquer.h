@class NSLock;

@interface NSMenuKEUniquer : NSObject {
    struct __CFDictionary { } *keyTable;
    NSLock *lock;
}

+ (id)mainMenuUniquer;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)removeAllItems;
- (void)dealloc;
- (void)addItems:(id)a0;
- (id)items;
- (id)init;
- (void)_coreAddItem:(id)a0;
- (void)_coreRemoveItem:(id)a0;
- (id)_debugContents;
- (void)_printContents;
- (void)removeItems:(id)a0;

@end

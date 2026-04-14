@class NSLock;

@interface NSMenuKEUniquer : NSObject {
    struct __CFDictionary { } *keyTable;
    NSLock *lock;
}

+ (id)mainMenuUniquer;

- (id)items;
- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)removeAllItems;
- (id)init;
- (void)addItems:(id)a0;
- (void)dealloc;
- (void)_coreAddItem:(id)a0;
- (void)_coreRemoveItem:(id)a0;
- (id)_debugContents;
- (void)_printContents;
- (void)removeItems:(id)a0;

@end

@class KHDBLockedDictionary;

@interface KHDBKeyPathSplitter : NSObject {
    KHDBLockedDictionary *_keyPathToFirstComponent;
    KHDBLockedDictionary *_keyPathToLastComponent;
}

- (id)init;
- (void)dealloc;
- (id)firstComponentForKeyPath:(id)a0;
- (id)lastComponentForKeyPath:(id)a0;

@end

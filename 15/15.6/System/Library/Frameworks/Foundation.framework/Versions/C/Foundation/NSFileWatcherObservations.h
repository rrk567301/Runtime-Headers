@class NSString;

@interface NSFileWatcherObservations : NSObject {
    char _attributesChanged;
    char _contentsChanged;
    char _deleted;
    char _moved;
    NSString *_lastObservedPath;
    char _didResetPath;
    NSString *_path;
}

- (void)dealloc;
- (id)description;
- (void)notifyObserver:(id /* block */)a0;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(id)a0;
- (id)initWithPath:(id)a0;

@end

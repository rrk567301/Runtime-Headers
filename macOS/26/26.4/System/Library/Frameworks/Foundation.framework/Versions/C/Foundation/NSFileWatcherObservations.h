@class NSString;

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (void)addDeletion;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addAnnouncedMoveToPath:(id)a0;
- (void)addDetectedMoveToPath:(id)a0;
- (id)description;
- (void)notifyObserver:(id /* block */)a0;
- (void)dealloc;

@end

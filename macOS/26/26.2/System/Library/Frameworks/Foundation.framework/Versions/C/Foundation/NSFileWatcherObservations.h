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

- (void)addAnnouncedMoveToPath:(id)a0;
- (void)addDetectedMoveToPath:(id)a0;
- (void)addContentsChange;
- (void)addAttributeChange;
- (void)addDeletion;
- (id)description;
- (id)initWithPath:(id)a0;
- (void)notifyObserver:(id /* block */)a0;
- (void)dealloc;

@end

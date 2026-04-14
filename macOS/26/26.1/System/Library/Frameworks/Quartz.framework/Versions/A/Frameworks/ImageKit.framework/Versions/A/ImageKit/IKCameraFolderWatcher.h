@class NSArray;

@interface IKCameraFolderWatcher : NSObject {
    id /* block */ _callback;
    struct __FSEventStream { } *_fsStream;
}

@property (retain) NSArray *pathArray;

+ (id)watchPathArray:(id)a0 withCallback:(id /* block */)a1;

- (void)startWatching;
- (void)stopWatching;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)initWithPathArray:(id)a0 andCallback:(id /* block */)a1;

@end

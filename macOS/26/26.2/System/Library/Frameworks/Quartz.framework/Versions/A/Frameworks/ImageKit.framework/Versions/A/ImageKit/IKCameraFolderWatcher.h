@class NSArray;

@interface IKCameraFolderWatcher : NSObject {
    id /* block */ _callback;
    struct __FSEventStream { } *_fsStream;
}

@property (retain) NSArray *pathArray;

+ (id)watchPathArray:(id)a0 withCallback:(id /* block */)a1;

- (void)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)stopWatching;
- (void)startWatching;
- (void)dealloc;
- (id)initWithPathArray:(id)a0 andCallback:(id /* block */)a1;

@end

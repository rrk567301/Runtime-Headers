@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSKDirectoryObserver : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) struct __FSEventStream { } *eventStream;
@property (nonatomic) char isEventStreamStarted;
@property (readonly, nonatomic) NSArray *URLs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) id representedObject;
@property (nonatomic) char recursive;
@property (nonatomic) char ignoreFiles;
@property (nonatomic) double eventInterval;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithURL:(id)a0 eventHandler:(id /* block */)a1;
- (id)initWithURLs:(id)a0 eventHandler:(id /* block */)a1;

@end

@class NSArray, NSObject;
@protocol OS_dispatch_queue, LNCorpusObserver;

@interface LNCorpus : NSObject

@property (retain, nonatomic) NSArray *terms;
@property (weak, nonatomic) id<LNCorpusObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long capacity;

- (void)removeAllWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)initWithContents:(id)a0;
- (void)removeObserver:(id)a0;
- (void)changeWithBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithContents:(id)a0 capacity:(long long)a1;
- (id)getTerms;

@end

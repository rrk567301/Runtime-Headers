@class NSMutableArray;

@interface MTRDownloads : NSObject

@property (retain, nonatomic) NSMutableArray *downloads;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)abortDownloadsForController:(id)a0;
- (id)add:(long long)a0 fabricIndex:(id)a1 nodeID:(id)a2 timeout:(double)a3 queue:(id)a4 completion:(id /* block */)a5 done:(id /* block */)a6;
- (id)get:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2;

@end

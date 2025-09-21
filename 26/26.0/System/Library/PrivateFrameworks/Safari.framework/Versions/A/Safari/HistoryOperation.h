@class History;

@interface HistoryOperation : NSObject {
    History *_history;
    id /* block */ _block;
}

- (void)commit;
- (void).cxx_destruct;
- (id)initWithHistory:(id)a0 block:(id /* block */)a1;

@end

@interface HistoryOperation : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)commit;
- (id)initWithBlock:(id /* block */)a0;

@end

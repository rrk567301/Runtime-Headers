@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)setCancelHandler:(id /* block */)a0;
- (void)dealloc;
- (void)cancel;
- (id)init;

@end

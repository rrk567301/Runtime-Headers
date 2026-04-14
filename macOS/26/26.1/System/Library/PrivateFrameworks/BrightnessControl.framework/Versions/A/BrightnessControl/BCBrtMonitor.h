@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)setCancelHandler:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

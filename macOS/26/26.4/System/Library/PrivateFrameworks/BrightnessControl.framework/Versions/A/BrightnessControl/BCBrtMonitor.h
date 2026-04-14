@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end

@interface _TtC23ImagePlaygroundInternalP33_982263688A621E733B31AF96D643042E24RemotelyCancelableWindow : NSWindow {
    void /* unknown type, empty encoding */ cancellationBlock;
}

- (void).cxx_destruct;
- (void)close;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)didReceiveRemoteCancellation:(id)a0;

@end

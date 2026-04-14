@interface REAudioStateHandler : NSObject {
    unsigned long long osStateHandle;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithTitle:(id)a0 block:(id /* block */)a1;

@end

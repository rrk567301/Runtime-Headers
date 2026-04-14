@class NSString;

@interface PDFKVOObserver : NSObject

@property (weak, nonatomic) id observedObject;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ block;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;

@end

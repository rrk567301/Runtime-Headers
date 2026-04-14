@class NSProgress, NSMutableArray;

@interface SKProgressObserver : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSMutableArray *messages;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0;

@end

@class NSMutableArray;

@interface SKProgress : NSProgress

@property (readonly, nonatomic) NSMutableArray *children;

+ (id)progressWithTotalUnitCount:(long long)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLocalizedAdditionalDescription:(id)a0;
- (void)chainChildProgress:(id)a0 withPendingUnitCount:(long long)a1;

@end

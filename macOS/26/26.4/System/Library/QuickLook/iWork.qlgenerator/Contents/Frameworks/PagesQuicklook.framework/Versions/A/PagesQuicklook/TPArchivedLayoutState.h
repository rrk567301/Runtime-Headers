@class TPLayoutState;

@interface TPArchivedLayoutState : TSPObject

@property (copy, nonatomic) TPLayoutState *layoutState;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 layoutState:(id)a1;
- (BOOL)isEqualToArchivedLayoutState:(id)a0;

@end

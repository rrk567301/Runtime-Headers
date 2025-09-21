@class TPLayoutState;

@interface TPArchivedLayoutState : TSPObject

@property (copy, nonatomic) TPLayoutState *layoutState;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 layoutState:(id)a1;
- (char)isEqualToArchivedLayoutState:(id)a0;

@end

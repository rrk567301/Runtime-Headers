@class TPUIState;

@interface TPArchivedUIState : TSPObject

@property (copy, nonatomic) TPUIState *uiState;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 uiState:(id)a1;
- (BOOL)isEqualToArchivedUIState:(id)a0;

@end

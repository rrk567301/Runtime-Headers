@interface PEAutoEnhanceAction : PEEditAction

@property (nonatomic) char enabled;

- (long long)actionType;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end

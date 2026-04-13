@interface WFContactHandleFieldParameter : WFContactFieldParameter

@property (nonatomic) BOOL allowsCustomHandles;

- (Class)singleStateClass;
- (void)setAllowsCustomHandles:(BOOL)a0;
- (id)supportedContactProperties;
- (Class)multipleStateClass;
- (BOOL)allowsCustomHandles;

@end

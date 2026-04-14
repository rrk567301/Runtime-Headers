@interface WFContactHandleFieldParameter : WFContactFieldParameter

@property (nonatomic) BOOL allowsCustomHandles;

- (void)setAllowsCustomHandles:(BOOL)a0;
- (Class)singleStateClass;
- (id)supportedContactProperties;
- (Class)multipleStateClass;
- (BOOL)allowsCustomHandles;

@end

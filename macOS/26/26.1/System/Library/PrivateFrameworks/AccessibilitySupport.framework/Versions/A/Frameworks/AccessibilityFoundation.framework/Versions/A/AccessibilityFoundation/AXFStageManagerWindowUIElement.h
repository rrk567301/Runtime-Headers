@protocol AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate;

@interface AXFStageManagerWindowUIElement : AXFMockUIElement

@property (nonatomic) unsigned int windowID;
@property (weak, nonatomic) id<AXFStageManagerWindowDataSource> dataSource;
@property (weak, nonatomic) id<AXFStageManagerWindowDelegate> delegate;

- (id)_valueForAttribute:(struct __CFString { } *)a0;
- (id)initWithWindow:(unsigned int)a0;
- (BOOL)performAction:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)actionNameAtIndex:(unsigned long long)a0;
- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (BOOL)isPromotable;

@end

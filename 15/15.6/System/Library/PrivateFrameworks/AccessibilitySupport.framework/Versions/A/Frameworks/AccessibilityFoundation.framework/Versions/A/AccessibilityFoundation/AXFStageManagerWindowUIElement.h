@protocol AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate;

@interface AXFStageManagerWindowUIElement : AXFMockUIElement

@property (nonatomic) unsigned int windowID;
@property (weak, nonatomic) id<AXFStageManagerWindowDataSource> dataSource;
@property (weak, nonatomic) id<AXFStageManagerWindowDelegate> delegate;

- (char)isValid;
- (void).cxx_destruct;
- (char)performAction:(struct __CFString { } *)a0;
- (id)initWithWindow:(unsigned int)a0;
- (id)_valueForAttribute:(struct __CFString { } *)a0;
- (id)actionNameAtIndex:(unsigned long long)a0;
- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (char)isPromotable;

@end

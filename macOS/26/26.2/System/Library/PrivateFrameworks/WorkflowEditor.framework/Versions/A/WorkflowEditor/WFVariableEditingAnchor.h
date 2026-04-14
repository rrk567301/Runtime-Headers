@class WFVariable, NSView, WFParameter;
@protocol WFVariableProvider;

@interface WFVariableEditingAnchor : NSObject

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, nonatomic) NSView *sourceView;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0 variableProvider:(id)a1 parameter:(id)a2 sourceView:(id)a3 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end

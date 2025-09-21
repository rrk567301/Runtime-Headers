@class FI_TReturnToSenderPillView, SWAttributionView, NSString, NSMenu;

@interface FI_TPropertySharedFromController : FI_IPropertyValueController <NSMenuDelegate> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodes;
}

@property (retain, nonatomic) SWAttributionView *attributionView;
@property (retain, nonatomic) FI_TReturnToSenderPillView *originatorView;
@property (retain, nonatomic) NSMenu *contextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuNeedsUpdate:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setValue:(id)a0;
- (BOOL)shouldBeVisible;
- (BOOL)isReturnToSender;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)updateWithNodes:(const void *)a0;

@end

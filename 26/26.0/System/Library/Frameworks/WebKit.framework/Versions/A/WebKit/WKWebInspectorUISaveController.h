@class NSString, NSPopUpButton, NSSavePanel;

@interface WKWebInspectorUISaveController : NSViewController {
    struct Vector<WebCore::InspectorFrontendClientSaveData, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct InspectorFrontendClientSaveData *m_buffer; unsigned int m_capacity; unsigned int m_size; } _saveDatas;
    struct RetainPtr<NSSavePanel> { NSSavePanel *m_ptr; } _savePanel;
    struct RetainPtr<NSPopUpButton> { NSPopUpButton *m_ptr; } _popUpButton;
}

@property (readonly, nonatomic) NSString *suggestedURL;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL base64Encoded;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_popUpButtonAction:(id)a0;
- (void)_updateSavePanel;
- (id)initWithSaveDatas:(void *)a0 savePanel:(id)a1;

@end

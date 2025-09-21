@class NSString, WKCNContactPickerDelegate;
@protocol WKContactPickerDelegate;

@interface WKContactPicker : NSObject <CNContactPickerDelegate> {
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webView;
    struct WeakObjCPtr<id<WKContactPickerDelegate>> { id m_weakReference; } _delegate;
    struct Vector<WebCore::ContactProperty, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { unsigned char *m_buffer; unsigned int m_capacity; unsigned int m_size; } _properties;
    struct CompletionHandler<void (std::optional<WTF::Vector<WebCore::ContactInfo>> &&)> { struct Function<void (std::optional<WTF::Vector<WebCore::ContactInfo>> &&)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&>, std::default_delete<WTF::Detail::CallableWrapperBase<void, std::optional<WTF::Vector<WebCore::ContactInfo>> &&>>> { void *__ptr_; } m_callableWrapper; } m_function; } _completionHandler;
    struct RetainPtr<WKCNContactPickerDelegate> { WKCNContactPickerDelegate *m_ptr; } _contactPickerDelegate;
}

@property (weak, nonatomic) id<WKContactPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (id).cxx_construct;
- (void)dismiss;
- (void).cxx_destruct;
- (struct ContactInfo { struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x0; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x1; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x2; })_contactInfoFromCNContact:(id)a0;
- (void)_contactPickerDidDismissWithContactInfo:(void *)a0;
- (id)_contactsFromJSContacts:(id)a0;
- (BOOL)dismissIfNeededWithReason:(unsigned char)a0;
- (void)dismissWithContacts:(id)a0;
- (void)presentWithRequestData:(const void *)a0 completionHandler:(void *)a1;

@end

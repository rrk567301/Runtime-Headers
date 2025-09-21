@class NSSet, NSString, NSMapTable, NSBundle;

@interface WKInspectorResourceURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    struct RetainPtr<NSMapTable<id<WKURLSchemeTask>,NSOperation *>> { NSMapTable *m_ptr; } _fileLoadOperations;
    struct RetainPtr<NSBundle> { NSBundle *m_ptr; } _cachedBundle;
    struct RetainPtr<NSSet<NSString *>> { NSSet *m_ptr; } _allowedURLSchemesForCSP;
    struct RetainPtr<NSSet<NSURL *>> { NSSet *m_ptr; } _mainResourceURLsForCSP;
}

@property (copy, nonatomic) NSSet *allowedURLSchemesForCSP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mainResourceURLsForCSP;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end

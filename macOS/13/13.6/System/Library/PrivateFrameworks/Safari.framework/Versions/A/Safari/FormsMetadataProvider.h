@class NSString;

@interface FormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    struct Array { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _framesForAllForms;
    struct Array { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _metadataForAllForms;
}

@property (readonly, nonatomic) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

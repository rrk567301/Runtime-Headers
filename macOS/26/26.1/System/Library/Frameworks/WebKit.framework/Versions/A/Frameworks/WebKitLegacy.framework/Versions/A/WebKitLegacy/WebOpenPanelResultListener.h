@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> { struct FileChooser *m_ptr; } _chooser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)chooseFilename:(id)a0;
- (void)chooseFilenames:(id)a0;
- (id)initWithChooser:(void *)a0;

@end

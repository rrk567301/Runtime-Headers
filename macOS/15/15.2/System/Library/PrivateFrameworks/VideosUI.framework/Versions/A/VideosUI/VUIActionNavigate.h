@class VUIDocumentDataSource, VUIAppContext;

@interface VUIActionNavigate : VUIAction {
    VUIAppContext *_appContext;
}

@property (readonly, nonatomic) VUIDocumentDataSource *document;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0 appContext:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end

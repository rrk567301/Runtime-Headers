@class VUIDocumentDataSource, VUIAppContext;

@interface VUIActionNavigate : VUIAction {
    VUIAppContext *_appContext;
}

@property (readonly, nonatomic) VUIDocumentDataSource *document;
@property (readonly, nonatomic) char requiresAuthentication;

- (void).cxx_destruct;
- (id)initWithActionDataSource:(id)a0 appContext:(id)a1;
- (id)initWithDocument:(id)a0 appContext:(id)a1;
- (char)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end

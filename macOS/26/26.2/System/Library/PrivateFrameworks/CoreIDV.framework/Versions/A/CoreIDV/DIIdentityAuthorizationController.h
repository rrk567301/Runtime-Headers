@class DIIdentityRequest, NSError, DIIdentityDocument;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityAuthorizationController : NSObject

- (id)init;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id<DIIdentityDocumentDescriptor>)a0 completion:(void (^)(BOOL))a1;
- (void)requestDocument:(DIIdentityRequest *)a0 completion:(void (^)(DIIdentityDocument *, NSError *))a1;

@end

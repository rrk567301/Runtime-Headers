@class NSUUID, NSURL;
@protocol LSRegistrantStrategy;

@interface LSByURLBundleUnregistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSURL *_url;
}

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithStrategy:(id)a0 operationUUID:(id)a1 URL:(id)a2;

@end

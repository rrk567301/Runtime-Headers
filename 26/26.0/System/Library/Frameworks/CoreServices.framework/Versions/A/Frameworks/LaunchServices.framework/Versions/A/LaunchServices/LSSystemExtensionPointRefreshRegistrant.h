@class NSUUID;
@protocol LSRegistrantStrategy;

@interface LSSystemExtensionPointRefreshRegistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
}

- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStrategy:(id)a0 operationUUID:(id)a1;

@end

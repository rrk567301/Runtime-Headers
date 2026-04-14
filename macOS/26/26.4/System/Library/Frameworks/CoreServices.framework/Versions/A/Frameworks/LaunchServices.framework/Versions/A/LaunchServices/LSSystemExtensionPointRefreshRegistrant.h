@class NSUUID;
@protocol LSRegistrantStrategy;

@interface LSSystemExtensionPointRefreshRegistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithStrategy:(id)a0 operationUUID:(id)a1;

@end

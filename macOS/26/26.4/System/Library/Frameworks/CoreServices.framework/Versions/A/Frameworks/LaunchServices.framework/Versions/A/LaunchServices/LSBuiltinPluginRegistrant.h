@class NSUUID, NSDictionary;
@protocol LSRegistrantStrategy;

@interface LSBuiltinPluginRegistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSDictionary *_miDict;
}

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithStrategy:(id)a0 operationUUID:(id)a1 itemInfoDict:(id)a2;

@end

@class NSUUID, NSDictionary, NSSet;
@protocol LSRegistrantStrategy;

@interface LSBuiltinApplicationRegistrant : NSObject {
    id<LSRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSDictionary *_miDict;
    NSSet *_personas;
}

- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStrategy:(id)a0 operationUUID:(id)a1 itemInfoDict:(id)a2 personas:(id)a3;

@end

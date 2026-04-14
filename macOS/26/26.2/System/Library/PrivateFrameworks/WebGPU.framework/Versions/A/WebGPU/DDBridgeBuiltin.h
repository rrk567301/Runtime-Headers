@class NSString;

@interface DDBridgeBuiltin : NSObject {
    void /* function */ definition;
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *definition;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDefinition:(id)a0 name:(id)a1;

@end

@class NSData, NSString;

@interface DDBridgeUpdateMaterial : NSObject {
    void /* function */ materialGraph;
    void /* function */ identifier;
}

@property (nonatomic, readonly) NSData *materialGraph;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaterialGraph:(id)a0 identifier:(id)a1;

@end

@class NSArray;

@interface SGMaterialConfiguration : NSObject {
    void /* function */ customGeometryProperties;
    void /* function */ functionConstantInputs;
}

@property (nonatomic, copy) NSArray *customGeometryProperties;
@property (nonatomic, copy) NSArray *functionConstantInputs;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

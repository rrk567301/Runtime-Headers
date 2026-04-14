@class NSArray;

@interface SGMaterialConfiguration : NSObject {
    void /* function */ customGeometryProperties;
    void /* function */ functionConstantInputs;
}

@property (nonatomic, copy) NSArray *customGeometryProperties;
@property (nonatomic, copy) NSArray *functionConstantInputs;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

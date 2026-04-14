@class NSArray;

@interface SGMaterialConfiguration : NSObject {
    void /* function */ customGeometryProperties;
    void /* function */ functionConstantInputs;
}

@property (nonatomic, copy) NSArray *customGeometryProperties;
@property (nonatomic, copy) NSArray *functionConstantInputs;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

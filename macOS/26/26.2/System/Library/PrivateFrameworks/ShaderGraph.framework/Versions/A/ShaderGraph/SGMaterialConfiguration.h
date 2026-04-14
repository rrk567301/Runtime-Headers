@class NSArray;

@interface SGMaterialConfiguration : NSObject {
    void /* function */ customGeometryProperties;
    void /* function */ functionConstantInputs;
}

@property (nonatomic, copy) NSArray *customGeometryProperties;
@property (nonatomic, copy) NSArray *functionConstantInputs;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

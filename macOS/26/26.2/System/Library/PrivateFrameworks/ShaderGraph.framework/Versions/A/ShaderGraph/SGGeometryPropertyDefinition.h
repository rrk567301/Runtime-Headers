@class NSString;

@interface SGGeometryPropertyDefinition : NSObject {
    void /* function */ name;
    void /* unknown type, empty encoding */ referencedGeomPropName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;

+ (id)geometryPropertyWithName:(id)a0 mappingTo:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end

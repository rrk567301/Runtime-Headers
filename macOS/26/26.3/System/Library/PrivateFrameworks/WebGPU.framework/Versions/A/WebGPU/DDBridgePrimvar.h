@class NSString;

@interface DDBridgePrimvar : NSObject {
    void /* function */ name;
    void /* function */ referencedGeomPropName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *referencedGeomPropName;
@property (nonatomic, readonly) unsigned long long attributeFormat;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 referencedGeomPropName:(id)a1 attributeFormat:(unsigned long long)a2;

@end

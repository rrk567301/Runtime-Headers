@class NSString, NSArray, NSDictionary, SGMaterialConfiguration, NSData;

@interface SGREMaterialSource : NSObject {
    void /* function */ uniforms;
    void /* function */ textures;
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ edgeDigest;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SGMaterialConfiguration *config;
@property (nonatomic, copy) NSArray *uniforms;
@property (nonatomic, copy) NSDictionary *textures;
@property (nonatomic) BOOL containsPreReleaseNodes;
@property (nonatomic, readonly) NSData *SHA512Hash;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;

@end

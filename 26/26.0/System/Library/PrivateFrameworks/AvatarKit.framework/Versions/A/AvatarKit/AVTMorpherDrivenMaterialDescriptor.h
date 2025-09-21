@class VFXMaterial, VFXMorpher, NSString, VFXNode;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject {
    VFXMorpher *_readMorpher;
    VFXNode *_readMorpherNode;
    long long _morphTargetIndex;
    VFXMaterial *_material;
    NSString *_propertyName;
}

- (void).cxx_destruct;

@end

@interface MTLIGSampler : _MTLSamplerState {
    struct SGfxSamplerState { union { struct { unsigned char AnisotropicAlgorithm : 1; unsigned short TextureLodBias : 13; unsigned char MinModeFilter : 3; unsigned char MagModeFilter : 3; unsigned char MipModeFilter : 2; unsigned char CoarseLodQualityMode : 5; unsigned char LodPreclampMode : 2; unsigned char TextureBorderColorMode : 1; unsigned char Reserved659 : 1; unsigned char SamplerDisable : 1; unsigned char CubeSurfaceControlMode : 1; unsigned char ShadowFunction : 3; unsigned char ChromaKeyMode : 1; unsigned char ChromaKeyIndex : 2; unsigned char ChromaKeyEnable : 1; unsigned short MaxLod : 12; unsigned short MinLod : 12; unsigned char LodClampMagnificationMode : 1; unsigned char Reserved669 : 5; unsigned int IndirectStatePointer : 18; unsigned char Reserved671 : 8; unsigned char TczAddressControlMode : 3; unsigned char TcyAddressControlMode : 3; unsigned char TcxAddressControlMode : 3; unsigned char ReductionTypeEnable : 1; unsigned char NonNormalizedCoordinateEnable : 1; unsigned char TrilinearFilterQuality : 2; unsigned char RAddressMinFilterRoundingEnable : 1; unsigned char RAddressMagFilterRoundingEnable : 1; unsigned char VAddressMinFilterRoundingEnable : 1; unsigned char VAddressMagFilterRoundingEnable : 1; unsigned char UAddressMinFilterRoundingEnable : 1; unsigned char UAddressMagFilterRoundingEnable : 1; unsigned char MaximumAnisotropy : 3; unsigned char ReductionType : 2; unsigned char Reserved686 : 8; } ; } ; } samplerState;
    struct SGfxSamplerIndirectState { union { float BorderColorRed; float Red; } ; union { float BorderColorGreen; float Green; } ; union { float BorderColorBlue; float Blue; } ; union { float BorderColorAlpha; float Alpha; } ; } borderColorState;
    BOOL hasBorderColor;
    unsigned char borderColor;
    unsigned int hash;
    unsigned long long _uniqueIdentifier;
    unsigned int bindlessOffset;
    void *fixedAllocator;
}

@property (readonly) unsigned long long uniqueIdentifier;

- (unsigned long long)resourceIndex;
- (id)initWithDevice:(id)a0 samplerDescriptor:(id)a1;
- (unsigned int)fixedHeapOffset;
- (unsigned int)fixedHeapOffsetAtIndex:(unsigned long long)a0;
- (unsigned int)hasFixedHeapOffset;
- (char)initializeSamplerState:(id)a0;

@end

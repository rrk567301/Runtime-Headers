@class NSString;
@protocol MTLDevice;

@interface AMD_MtlRasterizationRateMap : _MTLRasterizationRateMap <MTLRasterizationRateMap> {
    struct AMD_RateMapMembers { unsigned int verticalSamplesX[3][9]; unsigned int horizontalSamplesX[3][9]; unsigned int verticalSamplesY[3][9]; unsigned int horizontalSamplesY[3][9]; float verticalSamplesAlpha[3][8]; float horizontalSamplesAlpha[3][8]; unsigned int *vBins[3]; unsigned int *hBins[3]; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } layerSize[3]; float axisScale[3][2]; } m_baseMembers;
}

@property (readonly) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalGranularity;
@property (readonly) struct { unsigned long long size; unsigned long long align; } parameterBufferSizeAndAlign;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } screenSize;
@property (readonly) unsigned long long layerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)copyParameterDataToBuffer:(id)a0 offset:(unsigned long long)a1;
- (struct { float x0; float x1; })mapPhysicalToScreenCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { float x0; float x1; })mapScreenToPhysicalCoordinates:(struct { float x0; float x1; })a0 forLayer:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })physicalSizeForLayer:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;

@end

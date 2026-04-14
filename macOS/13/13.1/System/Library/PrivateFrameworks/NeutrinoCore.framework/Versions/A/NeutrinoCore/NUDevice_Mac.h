@interface NUDevice_Mac : NUDevice

@property (readonly, nonatomic, getter=isIntegrated) BOOL integrated;
@property (readonly, nonatomic, getter=isDiscrete) BOOL discrete;

- (id)debugDescription;
- (unsigned long long)family;
- (id)initWithName:(id)a0 model:(id)a1 metalDevice:(id)a2;
- (id)_newRenderer:(out id *)a0;
- (id)_newLowPriorityRenderer:(out id *)a0;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;
- (id)_newLowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id *)a0;
- (id)_newRendererWithOptions:(id)a0 error:(out id *)a1;
- (id)_newMetalRendererWithOptions:(id)a0 error:(out id *)a1;
- (id)_newSoftwareRenderer;
- (long long)_preferredSampleMode;

@end

@protocol HAL_DSP_PropertySet;

@interface ADMDSPProcessorPropertySet : NSObject <DSPProcessorPropertySet> {
    id<HAL_DSP_PropertySet> dspPropertySet;
}

- (void).cxx_destruct;
- (id)getHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withQualifierData:(id)a1;
- (id)getHostedDSPPropertyInfoArray;
- (BOOL)hasHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (BOOL)setHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withData:(id)a1 withQualifier:(id)a2 error:(id *)a3;
- (id)initWithDSPPropertySet:(id)a0;

@end

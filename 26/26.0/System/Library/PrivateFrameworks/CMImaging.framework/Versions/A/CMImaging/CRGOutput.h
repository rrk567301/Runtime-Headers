@class CRGDimensions, NSString, CRGPixelFormat, CRGOutputConstraints, CRGExternalOutput;
@protocol MTLTexture;

@interface CRGOutput : CRGPort <CRGOutput, CRGSourceInternal> {
    CRGExternalOutput *_externalOutput;
    id<MTLTexture> _coalescedTexture;
}

@property (readonly, nonatomic) BOOL isPrimaryOutput;
@property (nonatomic) BOOL coalesced;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CRGDimensions *dimensions;
@property (readonly, nonatomic) CRGPixelFormat *pixelFormat;
@property (readonly, nonatomic) CRGOutputConstraints *constraints;

- (void).cxx_destruct;
- (id)asOutput;
- (id)asExternalInput;
- (id)getCoalescedTexture;
- (id)getExternalOutput;
- (id)initWithDescriptor:(id)a0 node:(id)a1 isPrimaryOutput:(BOOL)a2;
- (void)setCoalescedTexture:(id)a0;
- (void)setExternalOutput:(id)a0;

@end

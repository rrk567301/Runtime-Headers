@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture {
    unsigned char _presentationType;
}

@property (readonly, copy, nonatomic) id<NSCopying> payload;
@property (readonly, nonatomic) unsigned char presentationType;

- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)isOpaque;
- (struct CGImage { } *)imageRepresentation;
- (void).cxx_destruct;
- (id)init;
- (long long)estimatedByteSize;
- (id)initWithPayload:(id)a0 presentationType:(unsigned char)a1;

@end

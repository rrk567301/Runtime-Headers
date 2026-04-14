@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture {
    int _presentationType;
}

@property (readonly, copy, nonatomic) id<NSCopying> payload;
@property (readonly, nonatomic) int presentationType;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (struct CGImage { } *)imageRepresentation;
- (struct CGSize { double x0; double x1; })pixelSize;
- (long long)estimatedByteSize;
- (id)initWithPayload:(id)a0 presentationType:(int)a1;

@end

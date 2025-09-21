@class CUIImage;

@interface _CUINineImagePieces : NSObject {
    CUIImage *_center;
    CUIImage *_topLeft;
    CUIImage *_top;
    CUIImage *_topRight;
    CUIImage *_right;
    CUIImage *_bottomRight;
    CUIImage *_bottom;
    CUIImage *_bottomLeft;
    CUIImage *_left;
    char _tileCenterAndEdges;
}

- (void)dealloc;
- (id)top;
- (id)bottom;
- (id)center;
- (id)left;
- (id)right;
- (id)bottomLeft;
- (id)topRight;
- (id)topLeft;
- (id)bottomRight;
- (id)initWithCenter:(id)a0 topLeft:(id)a1 top:(id)a2 topRight:(id)a3 right:(id)a4 bottomRight:(id)a5 bottom:(id)a6 bottomLeft:(id)a7 left:(id)a8 tileCenterAndEdges:(char)a9;
- (char)tileCenterAndEdges;

@end

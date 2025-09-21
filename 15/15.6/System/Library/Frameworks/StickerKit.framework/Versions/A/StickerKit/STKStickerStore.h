@interface STKStickerStore : NSObject {
    void /* unknown type, empty encoding */ stickerStore;
}

+ (id)stickerRepresentationWithData:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)stickerWithRepresentation:(id)a0 identifier:(id)a1 isRecent:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (char)addSticker:(id)a0;

@end

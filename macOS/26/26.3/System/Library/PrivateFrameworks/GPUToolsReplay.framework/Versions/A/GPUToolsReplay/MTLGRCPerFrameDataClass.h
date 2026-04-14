@interface MTLGRCPerFrameDataClass : NSObject {
    struct unique_ptr<GRCPerFrameData, std::default_delete<GRCPerFrameData>> { struct { struct GRCPerFrameData *__ptr_; } ; } _grcFrameData;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

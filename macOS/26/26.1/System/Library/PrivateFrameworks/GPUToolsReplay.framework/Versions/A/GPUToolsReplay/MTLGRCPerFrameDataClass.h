@interface MTLGRCPerFrameDataClass : NSObject {
    struct unique_ptr<GRCPerFrameData, std::default_delete<GRCPerFrameData>> { struct GRCPerFrameData *__ptr_; } _grcFrameData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

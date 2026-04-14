@interface RBEncoderSet : NSObject {
    struct refcounted_ptr<RB::Encoder::FontSet> { struct FontSet *_p; } _font_set;
    BOOL _final;
}

- (void)commit;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)addDisplayList:(id)a0;

@end

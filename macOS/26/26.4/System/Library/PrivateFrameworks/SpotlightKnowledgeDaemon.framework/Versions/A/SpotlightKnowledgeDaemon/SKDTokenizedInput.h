@class MADTextInput;

@interface SKDTokenizedInput : SKDModelInput {
    MADTextInput *_tokenizedInput;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (void).cxx_destruct;
- (id)initWithInputID:(int)a0 tokenizedInput:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end

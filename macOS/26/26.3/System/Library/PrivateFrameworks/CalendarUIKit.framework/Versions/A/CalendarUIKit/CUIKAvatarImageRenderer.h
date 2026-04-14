@class CNAvatarImageRenderer;

@interface CUIKAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_internalRenderer;
}

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void).cxx_destruct;
- (id)imageForContact:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end

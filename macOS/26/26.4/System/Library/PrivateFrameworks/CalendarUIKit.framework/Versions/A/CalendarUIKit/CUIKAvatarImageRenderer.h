@class CNAvatarImageRenderer;

@interface CUIKAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer *_internalRenderer;
}

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)init;
- (id)imageForContact:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end

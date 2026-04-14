@class MUISenderHeaderColors;

@interface MUIAvatarImageGeneratorResult : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysis;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colors;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ avatarStyle;
@property (nonatomic) void /* unknown type, empty encoding */ avatarType;
@property (nonatomic, retain) MUISenderHeaderColors *headerColors;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 style:(long long)a1 type:(long long)a2;
- (BOOL)needsBorder;

@end

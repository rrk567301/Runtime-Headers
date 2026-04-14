@interface AVCaptionInsetsOptions : NSObject <NSCopying>

@property (nonatomic) BOOL allowsHorizontalTextWrap;
@property (nonatomic) BOOL allowsHorizontalTextRepositioning;
@property (nonatomic) BOOL allowsVerticalTextWrap;
@property (nonatomic) BOOL allowsVerticalTextRepositioning;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

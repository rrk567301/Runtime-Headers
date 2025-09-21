@class NSData, NSString, NSDictionary, RFAspectRatio, RFSymbolImage, NSNumber, RFColor;

@interface RFUrlImage : NSObject <RFUrlImage, NSSecureCoding, NSCopying> {
    struct { unsigned char symbol_placeholder_image : 1; unsigned char image_style : 1; unsigned char sizing_mode : 1; unsigned char image_rendering_mode : 1; unsigned char corner_rounding_mode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *dark_mode_url;
@property (retain, nonatomic) RFSymbolImage *symbol_placeholder_image;
@property (nonatomic) int image_style;
@property (retain, nonatomic) RFAspectRatio *aspect_ratio;
@property (nonatomic) int sizing_mode;
@property (nonatomic) int image_rendering_mode;
@property (retain, nonatomic) RFColor *background_color;
@property (nonatomic) int corner_rounding_mode;
@property (copy, nonatomic) NSNumber *inset_padding;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasCorner_rounding_mode;
- (char)hasImage_rendering_mode;
- (char)hasImage_style;
- (char)hasSizing_mode;
- (char)hasSymbol_placeholder_image;

@end

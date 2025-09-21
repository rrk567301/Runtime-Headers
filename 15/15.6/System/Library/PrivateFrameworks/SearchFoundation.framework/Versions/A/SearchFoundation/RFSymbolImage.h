@class NSString, NSDictionary, NSData, RFColor;

@interface RFSymbolImage : NSObject <RFSymbolImage, NSSecureCoding, NSCopying> {
    struct { unsigned char image_style : 1; unsigned char symbol_rendering_mode : 1; unsigned char punches_through_background : 1; unsigned char vibrancy : 1; unsigned char corner_rounding_mode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RFColor *primary_color;
@property (retain, nonatomic) RFColor *secondary_color;
@property (nonatomic) int image_style;
@property (nonatomic) int symbol_rendering_mode;
@property (retain, nonatomic) RFColor *background_color;
@property (nonatomic) char punches_through_background;
@property (nonatomic) int vibrancy;
@property (nonatomic) int corner_rounding_mode;
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
- (char)hasImage_style;
- (char)hasPunches_through_background;
- (char)hasSymbol_rendering_mode;
- (char)hasVibrancy;

@end

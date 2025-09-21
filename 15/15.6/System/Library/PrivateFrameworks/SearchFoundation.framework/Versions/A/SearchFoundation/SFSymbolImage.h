@class NSString, NSDictionary, NSData, SFImage;

@interface SFSymbolImage : SFImage <SFSymbolImage, NSSecureCoding, NSCopying> {
    struct { unsigned char punchThroughBackground : 1; unsigned char backgroundColor : 1; unsigned char primaryColor : 1; unsigned char secondaryColor : 1; unsigned char fillStyle : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) char punchThroughBackground;
@property (nonatomic) int backgroundColor;
@property (nonatomic) int primaryColor;
@property (nonatomic) int secondaryColor;
@property (nonatomic) int fillStyle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy) NSData *imageData;
@property (nonatomic) char isTemplate;
@property (nonatomic) char shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) SFImage *badgingImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasBackgroundColor;
- (id)initWithProtobuf:(id)a0;
- (char)hasPrimaryColor;
- (char)hasFillStyle;
- (char)hasPunchThroughBackground;
- (char)hasSecondaryColor;

@end

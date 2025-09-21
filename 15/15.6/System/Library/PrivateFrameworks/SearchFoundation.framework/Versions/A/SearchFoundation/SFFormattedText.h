@class NSString, NSDictionary, NSData, SFImage;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying> {
    struct { unsigned char isEmphasized : 1; unsigned char isBold : 1; unsigned char textColor : 1; unsigned char encapsulationStyle : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFImage *glyph;
@property (nonatomic) char isEmphasized;
@property (nonatomic) char isBold;
@property (nonatomic) int textColor;
@property (nonatomic) int encapsulationStyle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasTextColor;
- (id)initWithProtobuf:(id)a0;
- (char)hasIsBold;
- (char)hasIsEmphasized;
- (char)hasEncapsulationStyle;

@end

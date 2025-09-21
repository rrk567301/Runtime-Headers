@class NSString, NSDictionary, NSData;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying> {
    struct { unsigned char redComponent : 1; unsigned char greenComponent : 1; unsigned char blueComponent : 1; unsigned char alphaComponent : 1; unsigned char colorTintStyle : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) SFColor *darkModeColor;
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
- (char)hasRedComponent;
- (char)hasAlphaComponent;
- (char)hasBlueComponent;
- (char)hasColorTintStyle;
- (char)hasGreenComponent;

@end

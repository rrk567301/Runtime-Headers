@class NSString, NSDictionary, NSData, SFColor, SFImage;

@interface SFImageDerivedColor : SFColor <SFImageDerivedColor, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFImage *image;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) SFColor *darkModeColor;
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

@end

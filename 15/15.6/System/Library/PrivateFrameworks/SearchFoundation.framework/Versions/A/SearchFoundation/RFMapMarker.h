@class NSData, NSString, NSDictionary, RFMapMarkerText, RFMapMarkerIdentifier, RFMapMarkerImage, RFColor;

@interface RFMapMarker : NSObject <RFMapMarker, NSSecureCoding, NSCopying> {
    struct { unsigned char identifier : 1; unsigned char text : 1; unsigned char image : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) RFMapMarkerIdentifier *identifier;
@property (retain, nonatomic) RFMapMarkerText *text;
@property (retain, nonatomic) RFMapMarkerImage *image;
@property (retain, nonatomic) RFColor *tint;
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
- (char)hasIdentifier;
- (char)hasText;
- (char)hasImage;
- (id)initWithProtobuf:(id)a0;

@end

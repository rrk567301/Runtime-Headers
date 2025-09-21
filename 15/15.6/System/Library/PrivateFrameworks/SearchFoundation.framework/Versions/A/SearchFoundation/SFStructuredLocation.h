@class NSString, NSDictionary, SFLatLng, NSData;

@interface SFStructuredLocation : NSObject <SFStructuredLocation, NSSecureCoding, NSCopying> {
    struct { unsigned char radius : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFLatLng *geoLocation;
@property (nonatomic) double radius;
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
- (char)hasRadius;
- (id)initWithProtobuf:(id)a0;

@end

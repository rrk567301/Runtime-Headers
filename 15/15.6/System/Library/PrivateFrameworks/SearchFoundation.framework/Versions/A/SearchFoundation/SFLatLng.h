@class NSDictionary, NSData, NSString;

@interface SFLatLng : NSObject <SFLatLng, NSSecureCoding, NSCopying> {
    struct { unsigned char lat : 1; unsigned char lng : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasLat;
- (char)hasLng;
- (id)initWithProtobuf:(id)a0;

@end

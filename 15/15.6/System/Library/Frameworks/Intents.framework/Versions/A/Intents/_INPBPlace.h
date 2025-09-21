@class NSArray, NSString, _INPBString;

@interface _INPBPlace : PBCodable <_INPBPlace, NSSecureCoding, NSCopying> {
    struct { unsigned char personalPlaceType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int personalPlaceType;
@property (nonatomic) char hasPersonalPlaceType;
@property (copy, nonatomic) NSArray *placeDescriptors;
@property (readonly, nonatomic) unsigned long long placeDescriptorsCount;
@property (retain, nonatomic) _INPBString *placeSubType;
@property (readonly, nonatomic) char hasPlaceSubType;
@property (retain, nonatomic) _INPBString *placeType;
@property (readonly, nonatomic) char hasPlaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)placeDescriptorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPersonalPlaceType:(id)a0;
- (void)addPlaceDescriptors:(id)a0;
- (void)clearPlaceDescriptors;
- (id)personalPlaceTypeAsString:(int)a0;
- (id)placeDescriptorsAtIndex:(unsigned long long)a0;

@end

@class NSArray, NSString, _INPBString;

@interface _INPBGeographicalFeature : PBCodable <_INPBGeographicalFeature, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *geographicalFeatureDescriptors;
@property (readonly, nonatomic) unsigned long long geographicalFeatureDescriptorsCount;
@property (retain, nonatomic) _INPBString *geographicalFeatureType;
@property (readonly, nonatomic) char hasGeographicalFeatureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)geographicalFeatureDescriptorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addGeographicalFeatureDescriptors:(id)a0;
- (void)clearGeographicalFeatureDescriptors;
- (id)geographicalFeatureDescriptorsAtIndex:(unsigned long long)a0;

@end

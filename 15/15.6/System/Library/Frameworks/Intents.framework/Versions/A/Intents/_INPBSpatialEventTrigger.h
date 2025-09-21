@class NSArray, _INPBLocationValue, NSString;

@interface _INPBSpatialEventTrigger : PBCodable <_INPBSpatialEventTrigger, NSSecureCoding, NSCopying> {
    struct { unsigned char event : 1; unsigned char mobileSpace : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int event;
@property (nonatomic) char hasEvent;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (readonly, nonatomic) char hasLocation;
@property (nonatomic) int mobileSpace;
@property (nonatomic) char hasMobileSpace;
@property (copy, nonatomic) NSArray *suggestedValues;
@property (readonly, nonatomic) unsigned long long suggestedValuesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)suggestedValuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEvent:(id)a0;
- (int)StringAsMobileSpace:(id)a0;
- (void)addSuggestedValues:(id)a0;
- (void)clearSuggestedValues;
- (id)eventAsString:(int)a0;
- (id)mobileSpaceAsString:(int)a0;
- (id)suggestedValuesAtIndex:(unsigned long long)a0;

@end

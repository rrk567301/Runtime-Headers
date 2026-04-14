@class _INPBLocation, NSArray, NSString;

@interface _INPBReportIncidentIntentResponse : PBCodable <_INPBReportIncidentIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _transportTypes;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSArray *supportedTypes;
@property (readonly, nonatomic) unsigned long long supportedTypesCount;
@property (readonly, nonatomic) int *transportTypes;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)supportedTypeType;

- (int)StringAsTransportTypes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)transportTypeAtIndex:(unsigned long long)a0;
- (void)addTransportType:(int)a0;
- (void)setTransportTypes:(int *)a0 count:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearTransportTypes;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)transportTypesAsString:(int)a0;
- (void)addSupportedType:(id)a0;
- (void)clearSupportedTypes;
- (id)supportedTypeAtIndex:(unsigned long long)a0;

@end

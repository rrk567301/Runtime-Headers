@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <_INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char defroster : 1; unsigned char enable : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) char hasCarName;
@property (nonatomic) int defroster;
@property (nonatomic) char hasDefroster;
@property (nonatomic) char enable;
@property (nonatomic) char hasEnable;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDefroster:(id)a0;
- (id)defrosterAsString:(int)a0;

@end

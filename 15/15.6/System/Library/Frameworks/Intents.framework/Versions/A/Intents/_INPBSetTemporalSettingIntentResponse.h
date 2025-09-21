@class NSString, _INPBDateTimeRange;

@interface _INPBSetTemporalSettingIntentResponse : PBCodable <_INPBSetTemporalSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) char hasErrorDetail;
@property (retain, nonatomic) _INPBDateTimeRange *oldValue;
@property (readonly, nonatomic) char hasOldValue;
@property (retain, nonatomic) _INPBDateTimeRange *updatedValue;
@property (readonly, nonatomic) char hasUpdatedValue;
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

@end

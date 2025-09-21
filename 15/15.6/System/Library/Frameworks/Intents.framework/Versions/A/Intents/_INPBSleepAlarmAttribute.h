@class NSString, _INPBDateTime;

@interface _INPBSleepAlarmAttribute : PBCodable <_INPBSleepAlarmAttribute, NSSecureCoding, NSCopying> {
    struct { unsigned char override : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTime *bedtime;
@property (readonly, nonatomic) char hasBedtime;
@property (nonatomic) char override;
@property (nonatomic) char hasOverride;
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

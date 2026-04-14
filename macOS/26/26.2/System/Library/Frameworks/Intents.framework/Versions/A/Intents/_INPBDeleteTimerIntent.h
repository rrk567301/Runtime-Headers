@class _INPBTimer, NSString, _INPBIntentMetadata;

@interface _INPBDeleteTimerIntent : PBCodable <_INPBDeleteTimerIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char deleteMultiple : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL deleteMultiple;
@property (nonatomic) BOOL hasDeleteMultiple;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)dictionaryRepresentation;

@end

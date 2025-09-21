@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char taskOutcome : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int taskOutcome;
@property (nonatomic) char hasTaskOutcome;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (readonly, nonatomic) char hasUserTask;
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
- (int)StringAsTaskOutcome:(id)a0;
- (id)taskOutcomeAsString:(int)a0;

@end

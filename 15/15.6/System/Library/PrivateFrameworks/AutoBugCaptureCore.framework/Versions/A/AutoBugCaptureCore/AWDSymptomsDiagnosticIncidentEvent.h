@class NSString;

@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char value : 1; unsigned char state : 1; unsigned char status : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasValue;
@property (nonatomic) unsigned long long value;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) char hasDetectedName;
@property (retain, nonatomic) NSString *detectedName;
@property (readonly, nonatomic) char hasEffectiveName;
@property (retain, nonatomic) NSString *effectiveName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;

@end

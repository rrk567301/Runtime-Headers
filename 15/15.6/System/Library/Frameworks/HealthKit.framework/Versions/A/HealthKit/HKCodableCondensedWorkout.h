@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {
    struct { unsigned char condenserDate : 1; unsigned char condenserVersion : 1; unsigned char creationDate : 1; unsigned char duration : 1; unsigned char endDate : 1; unsigned char persistentID : 1; unsigned char startDate : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasPersistentID;
@property (nonatomic) long long persistentID;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasCondenserVersion;
@property (nonatomic) long long condenserVersion;
@property (nonatomic) char hasCondenserDate;
@property (nonatomic) double condenserDate;

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

@end

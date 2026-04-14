@class NSString;

@interface HDCodableWorkoutZone : PBCodable <NSCopying> {
    struct { unsigned char endQuantity : 1; unsigned char objectType : 1; unsigned char startQuantity : 1; unsigned char timeInZone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL hasStartQuantity;
@property (nonatomic) double startQuantity;
@property (nonatomic) BOOL hasEndQuantity;
@property (nonatomic) double endQuantity;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasTimeInZone;
@property (nonatomic) long long timeInZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

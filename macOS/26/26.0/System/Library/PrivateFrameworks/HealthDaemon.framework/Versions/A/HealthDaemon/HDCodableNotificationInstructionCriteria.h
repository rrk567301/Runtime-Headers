@class NSString;

@interface HDCodableNotificationInstructionCriteria : PBCodable <NSCopying> {
    struct { unsigned char modificationTimeInterval : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUUIDString;
@property (retain, nonatomic) NSString *uUIDString;
@property (nonatomic) BOOL hasModificationTimeInterval;
@property (nonatomic) double modificationTimeInterval;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

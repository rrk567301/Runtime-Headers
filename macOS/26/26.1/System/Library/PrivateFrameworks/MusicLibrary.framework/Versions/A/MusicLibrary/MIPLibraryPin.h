@class NSString;

@interface MIPLibraryPin : PBCodable <NSCopying> {
    struct { unsigned char cloudItemID : 1; unsigned char defaultAction : 1; unsigned char entityType : 1; unsigned char position : 1; } _has;
}

@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) long long entityType;
@property (nonatomic) BOOL hasDefaultAction;
@property (nonatomic) long long defaultAction;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) long long position;
@property (nonatomic) BOOL hasCloudItemID;
@property (nonatomic) long long cloudItemID;
@property (readonly, nonatomic) BOOL hasCloudLibraryID;
@property (retain, nonatomic) NSString *cloudLibraryID;
@property (readonly, nonatomic) BOOL hasPositionUUID;
@property (retain, nonatomic) NSString *positionUUID;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

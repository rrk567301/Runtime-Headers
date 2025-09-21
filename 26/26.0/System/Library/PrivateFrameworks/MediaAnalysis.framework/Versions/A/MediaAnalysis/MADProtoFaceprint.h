@class NSData;

@interface MADProtoFaceprint : PBCodable <NSCopying> {
    struct { unsigned char faceprintVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFaceprintVersion;
@property (nonatomic) long long faceprintVersion;
@property (readonly, nonatomic) BOOL hasFaceprintData;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)protoFromPhotosFaceprint:(id)a0;

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
- (id)vcpFaceprintWithDetectionType:(short)a0;

@end

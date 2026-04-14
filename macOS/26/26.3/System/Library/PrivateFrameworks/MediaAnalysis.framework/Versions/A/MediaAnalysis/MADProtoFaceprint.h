@class NSData;

@interface MADProtoFaceprint : PBCodable <NSCopying> {
    struct { unsigned char faceprintVersion : 1; } _has;
}

@property (nonatomic) BOOL hasFaceprintVersion;
@property (nonatomic) long long faceprintVersion;
@property (readonly, nonatomic) BOOL hasFaceprintData;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)protoFromPhotosFaceprint:(id)a0;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)vcpFaceprintWithDetectionType:(short)a0;

@end

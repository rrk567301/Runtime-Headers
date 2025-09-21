@class NSString;

@interface HDCloudSyncCodableAttachmentReferenceTombstone : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) char hasReferenceIdentifier;
@property (retain, nonatomic) NSString *referenceIdentifier;
@property (readonly, nonatomic) char hasSchemaIdentifier;
@property (retain, nonatomic) NSString *schemaIdentifier;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;

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

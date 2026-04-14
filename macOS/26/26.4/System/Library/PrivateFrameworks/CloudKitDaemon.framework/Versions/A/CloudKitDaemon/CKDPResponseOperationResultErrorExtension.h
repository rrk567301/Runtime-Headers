@class NSString, NSData;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    struct { unsigned char typeCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExtensionName;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) unsigned int typeCode;
@property (readonly, nonatomic) BOOL hasExtensionPayload;
@property (retain, nonatomic) NSData *extensionPayload;

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

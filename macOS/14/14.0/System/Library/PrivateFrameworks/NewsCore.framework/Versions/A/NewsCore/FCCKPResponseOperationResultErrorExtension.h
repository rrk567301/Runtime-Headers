@class NSString, NSData;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    struct { unsigned char typeCode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

@class NSString, NSData;

@interface NTPBCKResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    struct { unsigned char typeCode : 1; } _has;
}

@property (readonly, nonatomic) char hasExtensionName;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) char hasTypeCode;
@property (nonatomic) unsigned int typeCode;
@property (readonly, nonatomic) char hasExtensionPayload;
@property (retain, nonatomic) NSData *extensionPayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

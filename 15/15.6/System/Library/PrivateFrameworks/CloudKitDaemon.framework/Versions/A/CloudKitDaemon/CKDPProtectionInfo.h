@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) NSData *protectionInfo;
@property (readonly, nonatomic) char hasProtectionInfoTag;
@property (retain, nonatomic) NSString *protectionInfoTag;

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

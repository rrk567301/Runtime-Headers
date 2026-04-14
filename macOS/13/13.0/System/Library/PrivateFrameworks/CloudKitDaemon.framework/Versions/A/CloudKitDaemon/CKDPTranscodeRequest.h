@class CKCodeRecordTransport, NSData;

@interface CKDPTranscodeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKCodeRecordTransport *record;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

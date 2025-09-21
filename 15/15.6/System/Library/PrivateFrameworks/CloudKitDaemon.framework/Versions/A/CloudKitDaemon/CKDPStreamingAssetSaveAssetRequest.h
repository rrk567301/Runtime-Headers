@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying> {
    struct { unsigned char requestedSize : 1; unsigned char uploadedSize : 1; } _has;
}

@property (nonatomic) char hasRequestedSize;
@property (nonatomic) long long requestedSize;
@property (nonatomic) char hasUploadedSize;
@property (nonatomic) long long uploadedSize;
@property (readonly, nonatomic) char hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;

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

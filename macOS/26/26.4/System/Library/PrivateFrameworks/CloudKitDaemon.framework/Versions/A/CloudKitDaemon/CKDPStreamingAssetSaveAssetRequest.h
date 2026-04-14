@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying> {
    struct { unsigned char requestedSize : 1; unsigned char uploadedSize : 1; } _has;
}

@property (nonatomic) BOOL hasRequestedSize;
@property (nonatomic) long long requestedSize;
@property (nonatomic) BOOL hasUploadedSize;
@property (nonatomic) long long uploadedSize;
@property (readonly, nonatomic) BOOL hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;

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

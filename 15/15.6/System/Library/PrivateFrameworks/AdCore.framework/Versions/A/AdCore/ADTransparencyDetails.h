@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) char hasTransparencyRendererPayload;
@property (retain, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) char hasTransparencyRendererURL;
@property (retain, nonatomic) NSString *transparencyRendererURL;

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

@class NSString;

@interface AWDIMessageCloudKitSyncFailed : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char linkQuality : 1; unsigned char nestedErrorCode : 1; unsigned char topLevelErrorCode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSyncType;
@property (retain, nonatomic) NSString *syncType;
@property (readonly, nonatomic) char hasTopLevelErrorDomain;
@property (retain, nonatomic) NSString *topLevelErrorDomain;
@property (nonatomic) char hasTopLevelErrorCode;
@property (nonatomic) int topLevelErrorCode;
@property (readonly, nonatomic) char hasNestedErrorDomain;
@property (retain, nonatomic) NSString *nestedErrorDomain;
@property (nonatomic) char hasNestedErrorCode;
@property (nonatomic) int nestedErrorCode;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

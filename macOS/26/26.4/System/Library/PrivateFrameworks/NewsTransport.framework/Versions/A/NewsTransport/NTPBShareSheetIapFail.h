@class NSString;

@interface NTPBShareSheetIapFail : PBCodable <NSCopying> {
    struct { unsigned char failureReason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFailedIapId;
@property (retain, nonatomic) NSString *failedIapId;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

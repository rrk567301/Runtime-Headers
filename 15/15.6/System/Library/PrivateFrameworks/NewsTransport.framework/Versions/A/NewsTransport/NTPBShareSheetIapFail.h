@class NSString;

@interface NTPBShareSheetIapFail : PBCodable <NSCopying> {
    struct { unsigned char failureReason : 1; } _has;
}

@property (readonly, nonatomic) char hasFailedIapId;
@property (retain, nonatomic) NSString *failedIapId;
@property (nonatomic) char hasFailureReason;
@property (nonatomic) int failureReason;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

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

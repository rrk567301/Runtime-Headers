@class NSString;

@interface NPKProtoRelevantPassTuple : PBCodable <NSCopying> {
    struct { unsigned char shouldSuppressLiveActivity : 1; } _has;
}

@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasRelevantText;
@property (retain, nonatomic) NSString *relevantText;
@property (nonatomic) BOOL hasShouldSuppressLiveActivity;
@property (nonatomic) BOOL shouldSuppressLiveActivity;

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

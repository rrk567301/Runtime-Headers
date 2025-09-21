@class NSString, NSMutableArray, ICIAMImpressionNode;

@interface ICIAMMetricEvent : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; unsigned char pageType : 1; unsigned char targetType : 1; } _has;
}

@property (readonly, nonatomic) char hasPageId;
@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) char hasPageType;
@property (nonatomic) int pageType;
@property (retain, nonatomic) NSMutableArray *pageDetails;
@property (readonly, nonatomic) char hasTargetId;
@property (retain, nonatomic) NSString *targetId;
@property (nonatomic) char hasTargetType;
@property (nonatomic) int targetType;
@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) char hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (retain, nonatomic) NSMutableArray *actionDetails;
@property (readonly, nonatomic) char hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) char hasPageUrl;
@property (retain, nonatomic) NSString *pageUrl;
@property (readonly, nonatomic) char hasImpressionType;
@property (retain, nonatomic) NSString *impressionType;
@property (readonly, nonatomic) char hasImpression;
@property (retain, nonatomic) ICIAMImpressionNode *impression;

+ (Class)pageDetailsType;
+ (Class)actionDetailsType;

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
- (int)StringAsActionType:(id)a0;
- (id)actionTypeAsString:(int)a0;
- (int)StringAsPageType:(id)a0;
- (int)StringAsTargetType:(id)a0;
- (void)addPageDetails:(id)a0;
- (id)actionDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionDetailsCount;
- (void)addActionDetails:(id)a0;
- (void)clearActionDetails;
- (void)clearPageDetails;
- (id)pageDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)pageDetailsCount;
- (id)pageTypeAsString:(int)a0;
- (id)targetTypeAsString:(int)a0;

@end

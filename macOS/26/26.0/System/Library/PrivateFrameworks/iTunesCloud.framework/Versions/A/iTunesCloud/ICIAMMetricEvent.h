@class NSString, NSMutableArray, ICIAMImpressionNode;

@interface ICIAMMetricEvent : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; unsigned char pageType : 1; unsigned char targetType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPageId;
@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) BOOL hasPageType;
@property (nonatomic) int pageType;
@property (retain, nonatomic) NSMutableArray *pageDetails;
@property (readonly, nonatomic) BOOL hasTargetId;
@property (retain, nonatomic) NSString *targetId;
@property (nonatomic) BOOL hasTargetType;
@property (nonatomic) int targetType;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) BOOL hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (retain, nonatomic) NSMutableArray *actionDetails;
@property (readonly, nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL hasPageUrl;
@property (retain, nonatomic) NSString *pageUrl;
@property (readonly, nonatomic) BOOL hasImpressionType;
@property (retain, nonatomic) NSString *impressionType;
@property (readonly, nonatomic) BOOL hasImpression;
@property (retain, nonatomic) ICIAMImpressionNode *impression;

+ (Class)actionDetailsType;
+ (Class)pageDetailsType;

- (void)clearActionDetails;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)targetTypeAsString:(int)a0;
- (id)actionTypeAsString:(int)a0;
- (id)pageDetailsAtIndex:(unsigned long long)a0;
- (int)StringAsPageType:(id)a0;
- (id)dictionaryRepresentation;
- (void)addActionDetails:(id)a0;
- (int)StringAsTargetType:(id)a0;
- (unsigned long long)pageDetailsCount;
- (id)pageTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void)addPageDetails:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)actionDetailsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsActionType:(id)a0;
- (void)clearPageDetails;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)actionDetailsCount;

@end

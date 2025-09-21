@class ICIAMMessageRule, NSString, ICIAMMetricEvent, ICIAMLocalNotification, NSMutableArray, ICIAMApplicationBadge;

@interface ICIAMApplicationMessage : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char assetPrefetchStrategy : 1; unsigned char globalPresentationPolicyGroup : 1; unsigned char maximumDisplays : 1; unsigned char messageType : 1; unsigned char modalPresentationStyle : 1; unsigned char priority : 1; unsigned char carousel : 1; unsigned char hasCloseButton : 1; unsigned char reportingEnabled : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *targets;
@property (nonatomic) char hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) char hasCarousel;
@property (nonatomic) char carousel;
@property (nonatomic) char hasPriority;
@property (nonatomic) int priority;
@property (readonly, nonatomic) char hasTemplateURL;
@property (retain, nonatomic) NSString *templateURL;
@property (nonatomic) char hasMaximumDisplays;
@property (nonatomic) int maximumDisplays;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) char hasHasCloseButton;
@property (nonatomic) char hasCloseButton;
@property (retain, nonatomic) NSMutableArray *contentPages;
@property (readonly, nonatomic) char hasRule;
@property (retain, nonatomic) ICIAMMessageRule *rule;
@property (readonly, nonatomic) char hasWebArchiveURL;
@property (retain, nonatomic) NSString *webArchiveURL;
@property (nonatomic) char hasModalPresentationStyle;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) char hasGlobalPresentationPolicyGroup;
@property (nonatomic) int globalPresentationPolicyGroup;
@property (nonatomic) char hasAssetPrefetchStrategy;
@property (nonatomic) int assetPrefetchStrategy;
@property (readonly, nonatomic) char hasHoldoutEvent;
@property (retain, nonatomic) ICIAMMetricEvent *holdoutEvent;
@property (readonly, nonatomic) char hasLocalNotification;
@property (retain, nonatomic) ICIAMLocalNotification *localNotification;
@property (readonly, nonatomic) char hasImpressionEvent;
@property (retain, nonatomic) ICIAMMetricEvent *impressionEvent;
@property (retain, nonatomic) NSMutableArray *presentationTriggers;
@property (readonly, nonatomic) char hasApplicationBadge;
@property (retain, nonatomic) ICIAMApplicationBadge *applicationBadge;
@property (nonatomic) char hasReportingEnabled;
@property (nonatomic) char reportingEnabled;

+ (Class)targetType;
+ (Class)contentPagesType;
+ (Class)presentationTriggersType;

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
- (int)StringAsMessageType:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (void)addTarget:(id)a0;
- (int)StringAsAssetPrefetchStrategy:(id)a0;
- (int)StringAsGlobalPresentationPolicyGroup:(id)a0;
- (id)modalPresentationStyleAsString:(int)a0;
- (int)StringAsModalPresentationStyle:(id)a0;
- (void)addContentPages:(id)a0;
- (void)addPresentationTriggers:(id)a0;
- (id)assetPrefetchStrategyAsString:(int)a0;
- (void)clearContentPages;
- (void)clearPresentationTriggers;
- (void)clearTargets;
- (id)contentPagesAtIndex:(unsigned long long)a0;
- (unsigned long long)contentPagesCount;
- (id)globalPresentationPolicyGroupAsString:(int)a0;
- (id)presentationTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)presentationTriggersCount;
- (id)targetAtIndex:(unsigned long long)a0;
- (unsigned long long)targetsCount;

@end

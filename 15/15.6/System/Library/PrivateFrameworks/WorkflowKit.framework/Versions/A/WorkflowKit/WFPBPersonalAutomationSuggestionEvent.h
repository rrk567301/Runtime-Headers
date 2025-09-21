@class NSString;

@interface WFPBPersonalAutomationSuggestionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char interacted : 1; unsigned char visible : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasIntentType;
@property (retain, nonatomic) NSString *intentType;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) char hasVisible;
@property (nonatomic) char visible;
@property (nonatomic) char hasInteracted;
@property (nonatomic) char interacted;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;
@property (readonly, nonatomic) char hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) char hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) char hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;

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

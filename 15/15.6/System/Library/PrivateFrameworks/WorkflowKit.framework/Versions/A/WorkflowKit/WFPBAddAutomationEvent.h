@class NSString;

@interface WFPBAddAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char requiresRuntimeConfirmation : 1; unsigned char showsNotification : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (readonly, nonatomic) char hasIntentType;
@property (retain, nonatomic) NSString *intentType;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) char hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) char hasShortcutIdentifier;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) char hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) char hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) char hasAutomationSuggestionsTrialIdentifier;
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic) char hasShowsNotification;
@property (nonatomic) char showsNotification;
@property (nonatomic) char hasRequiresRuntimeConfirmation;
@property (nonatomic) char requiresRuntimeConfirmation;

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

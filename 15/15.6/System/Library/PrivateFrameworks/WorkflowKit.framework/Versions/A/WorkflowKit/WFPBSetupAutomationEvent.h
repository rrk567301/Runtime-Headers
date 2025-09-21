@class NSString;

@interface WFPBSetupAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char requiredRuntimeConfirmation : 1; unsigned char showsNotification : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (nonatomic) char hasRequiredRuntimeConfirmation;
@property (nonatomic) char requiredRuntimeConfirmation;
@property (nonatomic) char hasShowsNotification;
@property (nonatomic) char showsNotification;
@property (readonly, nonatomic) char hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

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

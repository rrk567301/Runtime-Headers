@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {
    struct { unsigned char actionIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasShortcutIdentifier;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (nonatomic) BOOL hasActionIndex;
@property (nonatomic) unsigned int actionIndex;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;

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

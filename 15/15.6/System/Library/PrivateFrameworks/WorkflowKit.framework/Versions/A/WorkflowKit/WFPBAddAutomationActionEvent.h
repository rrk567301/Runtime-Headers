@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {
    struct { unsigned char actionIndex : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasShortcutIdentifier;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (nonatomic) char hasActionIndex;
@property (nonatomic) unsigned int actionIndex;
@property (readonly, nonatomic) char hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;

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

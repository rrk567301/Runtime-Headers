@class NSString;

@interface WFPBSuspendShortcutEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasPresentationStyle;
@property (retain, nonatomic) NSString *presentationStyle;
@property (readonly, nonatomic) char hasDismissalType;
@property (retain, nonatomic) NSString *dismissalType;

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

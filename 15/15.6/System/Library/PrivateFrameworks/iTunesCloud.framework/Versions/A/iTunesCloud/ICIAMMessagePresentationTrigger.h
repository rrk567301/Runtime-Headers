@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {
    struct { unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) char hasTriggerName;
@property (retain, nonatomic) NSString *triggerName;
@property (nonatomic) char hasKind;
@property (nonatomic) int kind;
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
- (int)StringAsKind:(id)a0;
- (id)kindAsString:(int)a0;

@end

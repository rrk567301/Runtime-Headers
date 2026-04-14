@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {
    struct { unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTriggerName;
@property (retain, nonatomic) NSString *triggerName;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)kindAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsKind:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

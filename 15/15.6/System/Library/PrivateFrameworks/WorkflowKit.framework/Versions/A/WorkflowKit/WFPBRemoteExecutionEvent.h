@class NSString;

@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) char hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) char hasDestinationType;
@property (retain, nonatomic) NSString *destinationType;
@property (readonly, nonatomic) char hasConnectionType;
@property (retain, nonatomic) NSString *connectionType;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;

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

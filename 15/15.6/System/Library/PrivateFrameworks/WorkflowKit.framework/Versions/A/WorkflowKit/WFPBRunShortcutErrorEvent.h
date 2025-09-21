@class NSString;

@interface WFPBRunShortcutErrorEvent : PBCodable <NSCopying> {
    struct { unsigned char didRunRemotely : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) char hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (readonly, nonatomic) char hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (nonatomic) char hasDidRunRemotely;
@property (nonatomic) char didRunRemotely;
@property (readonly, nonatomic) char hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (readonly, nonatomic) char hasAutomationType;
@property (retain, nonatomic) NSString *automationType;

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

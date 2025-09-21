@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char participantKeyLost : 1; } _has;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic) char hasParticipantKeyLost;
@property (nonatomic) char participantKeyLost;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (id)options;
+ (Class)publicKeysType;
+ (Class)pluginFieldsType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;
- (void)addPluginFields:(id)a0;
- (void)clearPluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)pluginFieldsCount;

@end

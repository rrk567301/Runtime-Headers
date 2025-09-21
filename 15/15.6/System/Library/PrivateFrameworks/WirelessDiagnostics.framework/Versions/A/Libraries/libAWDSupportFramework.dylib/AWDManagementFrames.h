@interface AWDManagementFrames : PBCodable <NSCopying> {
    struct { unsigned char aTIM : 1; unsigned char action : 1; unsigned char assocRequest : 1; unsigned char assocResponse : 1; unsigned char auth : 1; unsigned char beacon : 1; unsigned char deauth : 1; unsigned char disassoc : 1; unsigned char probeRequest : 1; unsigned char probeResponse : 1; unsigned char reassocRequest : 1; unsigned char reassocResponse : 1; } _has;
}

@property (nonatomic) char hasAssocRequest;
@property (nonatomic) unsigned long long assocRequest;
@property (nonatomic) char hasAssocResponse;
@property (nonatomic) unsigned long long assocResponse;
@property (nonatomic) char hasReassocRequest;
@property (nonatomic) unsigned long long reassocRequest;
@property (nonatomic) char hasReassocResponse;
@property (nonatomic) unsigned long long reassocResponse;
@property (nonatomic) char hasProbeRequest;
@property (nonatomic) unsigned long long probeRequest;
@property (nonatomic) char hasProbeResponse;
@property (nonatomic) unsigned long long probeResponse;
@property (nonatomic) char hasBeacon;
@property (nonatomic) unsigned long long beacon;
@property (nonatomic) char hasATIM;
@property (nonatomic) unsigned long long aTIM;
@property (nonatomic) char hasDisassoc;
@property (nonatomic) unsigned long long disassoc;
@property (nonatomic) char hasAuth;
@property (nonatomic) unsigned long long auth;
@property (nonatomic) char hasDeauth;
@property (nonatomic) unsigned long long deauth;
@property (nonatomic) char hasAction;
@property (nonatomic) unsigned long long action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

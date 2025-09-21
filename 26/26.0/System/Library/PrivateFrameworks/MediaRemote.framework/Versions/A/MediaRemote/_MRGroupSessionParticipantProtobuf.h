@class NSString, _MRUserIdentityProtobuf;

@interface _MRGroupSessionParticipantProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connected : 1; unsigned char guest : 1; unsigned char hidden : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentity;
@property (retain, nonatomic) _MRUserIdentityProtobuf *identity;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL hasGuest;
@property (nonatomic) BOOL guest;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, _MRUserIdentityProtobuf;

@interface _MRGroupSessionParticipantProtobuf : PBCodable <NSCopying> {
    struct { unsigned char connected : 1; unsigned char guest : 1; unsigned char hidden : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentity;
@property (retain, nonatomic) _MRUserIdentityProtobuf *identity;
@property (nonatomic) char hasConnected;
@property (nonatomic) char connected;
@property (nonatomic) char hasGuest;
@property (nonatomic) char guest;
@property (nonatomic) char hasHidden;
@property (nonatomic) char hidden;

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

@class ICPBDGSStartDelegationResponse, ICPBDGSFinishDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;
    unsigned int _requestUniqueID;
    ICPBDGSStartDelegationResponse *_startDelegationResponse;
    struct { unsigned char requestUniqueID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

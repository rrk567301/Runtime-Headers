@class TPPBUnknownMachineID, TPPBAncientEpoch, TPPBDispositionEvictedMachineID, TPPBDispositionDuplicateMachineID, TPPBPolicyProhibits, TPPBDispositionDisallowedMachineID, TPPBDispositionUnknownReasonRemovalMachineID, TPPBDispositionGhostedMachineID;

@interface TPPBDisposition : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAncientEpoch;
@property (retain, nonatomic) TPPBAncientEpoch *ancientEpoch;
@property (readonly, nonatomic) char hasPolicyProhibits;
@property (retain, nonatomic) TPPBPolicyProhibits *policyProhibits;
@property (readonly, nonatomic) char hasUnknownMachineID;
@property (retain, nonatomic) TPPBUnknownMachineID *unknownMachineID;
@property (readonly, nonatomic) char hasDuplicateMachineID;
@property (retain, nonatomic) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (readonly, nonatomic) char hasDisallowedMachineID;
@property (retain, nonatomic) TPPBDispositionDisallowedMachineID *disallowedMachineID;
@property (readonly, nonatomic) char hasEvictedMachineID;
@property (retain, nonatomic) TPPBDispositionEvictedMachineID *evictedMachineID;
@property (readonly, nonatomic) char hasUnknownReasonRemovalMachineID;
@property (retain, nonatomic) TPPBDispositionUnknownReasonRemovalMachineID *unknownReasonRemovalMachineID;
@property (readonly, nonatomic) char hasGhostedMachineID;
@property (retain, nonatomic) TPPBDispositionGhostedMachineID *ghostedMachineID;

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

@class CKDPIdentifier, NSMutableArray, CKDPContactInformation;

@interface CKDPInheritedSharesInfoInheritedParticipant : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _participantTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _permissions;
}

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) CKDPIdentifier *userId;
@property (retain, nonatomic) NSMutableArray *customRoles;
@property (readonly, nonatomic) BOOL hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation *contactInformation;
@property (readonly, nonatomic) unsigned long long participantTypesCount;
@property (readonly, nonatomic) int *participantTypes;
@property (readonly, nonatomic) unsigned long long permissionsCount;
@property (readonly, nonatomic) int *permissions;

+ (Class)customRoleType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addPermission:(int)a0;
- (int)StringAsParticipantTypes:(id)a0;
- (int)StringAsPermissions:(id)a0;
- (void)addCustomRole:(id)a0;
- (void)addParticipantType:(int)a0;
- (void)clearCustomRoles;
- (void)clearParticipantTypes;
- (void)clearPermissions;
- (id)customRoleAtIndex:(unsigned long long)a0;
- (unsigned long long)customRolesCount;
- (int)participantTypeAtIndex:(unsigned long long)a0;
- (id)participantTypesAsString:(int)a0;
- (int)permissionAtIndex:(unsigned long long)a0;
- (id)permissionsAsString:(int)a0;
- (void)setParticipantTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setPermissions:(int *)a0 count:(unsigned long long)a1;

@end

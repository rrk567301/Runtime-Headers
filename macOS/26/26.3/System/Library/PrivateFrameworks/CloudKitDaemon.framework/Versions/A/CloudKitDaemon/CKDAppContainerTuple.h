@class CKDApplicationID, CKContainerID, CKPersona, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDApplicationID *applicationID;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) CKPersona *persona;
@property (readonly, copy, nonatomic) NSString *personaID;

- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;
- (void).cxx_destruct;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 persona:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

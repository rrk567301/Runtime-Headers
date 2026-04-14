@class NSUUID;

@interface HMDAssociatedUnassociatedFaceCrop : HMFaceCrop

@property (readonly, copy) NSUUID *personFaceCropUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 dataRepresentation:(id)a1 dateCreated:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 personFaceCropUUID:(id)a4;

@end

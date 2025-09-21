@class NSUUID, NSData, NSDate;

@interface HMDUnassociatedFaceCropModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;

@property (retain) NSData *faceBoundingBoxData;
@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceBoundingBox;
@property (retain) NSUUID *personFaceCropUUID;

+ (id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(BOOL)a0;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;

- (id)createAssociatedUnassociatedFaceCrop;
- (id)createUnassociatedFaceCrop;
- (id)initWithFaceCrop:(id)a0;

@end

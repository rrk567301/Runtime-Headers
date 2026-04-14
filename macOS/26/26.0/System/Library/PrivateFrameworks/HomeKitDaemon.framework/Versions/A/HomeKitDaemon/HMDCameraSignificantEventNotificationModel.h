@class CKAsset, HMBModelCloudReference, NSNumber, NSDate;

@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) NSNumber *significantEvent;
@property (retain) NSNumber *confidenceLevel;
@property (retain) NSDate *dateOfOccurrence;
@property (retain) NSNumber *timeOffsetWithinClip;
@property (retain) HMBModelCloudReference *associatedClip;
@property (retain) CKAsset *heroFrameAsset;
@property (retain) CKAsset *faceCropAsset;

+ (id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)a0;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;

- (id)createClipSignificantEventWithCameraProfileUUID:(id)a0 faceClassification:(id)a1;

@end

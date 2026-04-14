@class NSArray;

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

@property (nonatomic) BOOL detectsHands;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupNamesRevision1;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedJointNamesAndReturnError:(id *)a0;
- (id)supportedJointsGroupNamesAndReturnError:(id *)a0;

@end

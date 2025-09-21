@class NSArray;

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

@property (nonatomic) char detectsHands;
@property (readonly, copy) NSArray *results;

+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupNamesRevision1;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedJointNamesAndReturnError:(id *)a0;
- (id)supportedJointsGroupNamesAndReturnError:(id *)a0;

@end

@class NSArray;

@interface VNRecognizeAnimalsRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)knownAnimalIdentifiersForRevision:(unsigned long long)a0 error:(id *)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (long long)dependencyProcessingOrdinality;
- (id)supportedIdentifiersAndReturnError:(id *)a0;

@end

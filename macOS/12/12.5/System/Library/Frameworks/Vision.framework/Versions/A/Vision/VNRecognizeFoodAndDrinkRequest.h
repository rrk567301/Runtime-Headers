@class NSArray;

@interface VNRecognizeFoodAndDrinkRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (BOOL)supportsPrivateRevision:(unsigned long long)a0;
+ (BOOL)_shouldProcessRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedIdentifiersAndReturnError:(id *)a0;

@end

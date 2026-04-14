@class EKPredictedLocationOfInterest, NSString, NSDictionary, NSData, CLLocation, NSNumber, NSManagedObjectID;
@protocol EKProtocolStructuredLocation;

@interface EKStructuredLocation : EKObject <EKProtocolMutableStructuredLocation, NSCopying>

@property (readonly, nonatomic, getter=isImprecise) BOOL imprecise;
@property (readonly, nonatomic) EKPredictedLocationOfInterest *predictedLOI;
@property (readonly, nonatomic) NSString *derivedFrom;
@property (readonly, nonatomic, getter=isPrediction) BOOL prediction;
@property (copy, nonatomic) NSString *contactLabel;
@property (readonly, nonatomic) BOOL isStructured;
@property (retain, nonatomic) NSString *routing;
@property (readonly, copy, nonatomic) id<EKProtocolStructuredLocation> backingLocation;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSNumber *radiusNumber;
@property (copy, nonatomic) NSString *abURLString;
@property (copy, nonatomic) NSString *geoURLString;
@property (copy, nonatomic) NSString *routeType;
@property (copy, nonatomic) NSData *mapKitHandle;
@property (readonly, retain) NSString *uuid;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationWithTitle:(id)a0;
+ (Class)frozenClass;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (id)knownIdentityKeys;
+ (id)knownSingleValueKeys;
+ (id)locationWithCalLocation:(id)a0;
+ (id)locationWithPlacemark:(id)a0;
+ (id)locationWithMapItem:(id)a0;
+ (id)displayLabelForContact:(id)a0 unlocalizedLabel:(id)a1;

- (void).cxx_destruct;
- (BOOL)_reset;
- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithObject:(id)a0 createPartialBackingObject:(BOOL)a1 keepBackingObject:(BOOL)a2 preFrozenRelationshipObjects:(id)a3 additionalFrozenProperties:(id)a4;
- (void)updateFromMapItem:(id)a0;
- (id)calLocation;

@end

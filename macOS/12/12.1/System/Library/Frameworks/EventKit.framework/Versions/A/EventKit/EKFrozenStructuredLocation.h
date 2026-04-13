@class NSString, NSDictionary, NSData, NSNumber, NSManagedObjectID;

@interface EKFrozenStructuredLocation : EKFrozenObject <EKProtocolStructuredLocation>

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *abURLString;
@property (readonly, copy, nonatomic) NSString *geoURLString;
@property (readonly, copy, nonatomic) NSString *routeType;
@property (readonly, copy, nonatomic) NSData *mapKitHandle;
@property (readonly, copy, nonatomic) NSNumber *radiusNumber;
@property (readonly, retain) NSString *uuid;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;
+ (Class)alternateUniverseClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;

@end

@class NSString, NSDictionary, NSURL, NSDate, NSManagedObjectID;
@protocol EKProtocolStructuredLocation;

@interface EKFrozenAlarm : EKFrozenObject <EKProtocolAlarm>

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *soundName;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *bookmark;
@property (readonly, nonatomic) NSString *sharedUID;
@property (readonly, copy, nonatomic) NSDate *absoluteDate;
@property (readonly, nonatomic) double relativeOffset;
@property (readonly, nonatomic) BOOL isTimeToLeaveAlarm;
@property (readonly, copy, nonatomic) NSDate *acknowledgedDate;
@property (readonly, copy, nonatomic) NSString *actionString;
@property (readonly, copy, nonatomic) NSString *proximityString;
@property (readonly, copy, nonatomic) id<EKProtocolStructuredLocation> structuredLocation;
@property (readonly, nonatomic) BOOL isSnoozed;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL notRelativeToTravelTime;
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

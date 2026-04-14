@class NSUUID, NSString, NSData, NSPredicate, NSSet, NSArray, MKFEventTriggerDatabaseID, NSDate, Protocol, NSNumber;
@protocol MKFHome, MKFUser;

@interface _MKFEventTrigger : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (retain, nonatomic) NSSet *events_;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (copy, nonatomic) NSNumber *executeOnce;
@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) MKFEventTriggerDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSArray *actionSets;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> owner;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfEventTrigger;
- (id)materializeOrCreateEventsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeCalendarEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeDurationEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeLocationEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypePresenceEventWithModelID:(id)a0;
- (id)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEventsRelationOfTypeSignificantTimeEventWithModelID:(id)a0;

@end

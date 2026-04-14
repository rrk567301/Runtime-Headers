@class Protocol, NSUUID, NSString, NSData, NSDate, MKFCalendarEventDatabaseID, NSNumber;
@protocol MKFHome, MKFEventTrigger;

@interface _MKFCalendarEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCalendarEvent, MKFCalendarEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *fireDateComponents;
@property (retain, nonatomic) NSData *fireDateComponents;
@property (readonly, copy, nonatomic) MKFCalendarEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, retain, nonatomic) id<MKFEventTrigger> trigger;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfCalendarEvent;

@end

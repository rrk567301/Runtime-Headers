@class NSString, NSSet, NSData, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *disablementReason;
@property (nonatomic) BOOL editableShortcut;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int notificationLevel;
@property (nonatomic) BOOL potentialLoopDetected;
@property (retain, nonatomic) NSData *selectedEntryMetadata;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) BOOL shouldRecur;
@property (nonatomic) int source;
@property (retain, nonatomic) NSSet *events;
@property (retain, nonatomic) NSSet *runEvents;
@property (retain, nonatomic) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;
+ (id)recordPropertyMap;

- (id)descriptor;
- (id)trigger;

@end

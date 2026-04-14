@class NSString, NSDictionary, NSSet, NSArray, NSEntityDescription, NSPredicate;

@interface WADeviceAnalytics_Event : NSObject

@property (retain) NSString *eventType;
@property unsigned long long useAs;
@property (retain) NSEntityDescription *entity;
@property (retain) NSDictionary *properties;
@property (retain) NSSet *keyPathsToFetch;
@property (retain) NSArray *propertiesToFetch;
@property (retain) NSArray *relationshipKeyPathsToFetch;
@property (retain) NSPredicate *entityFilter;

+ (id)eventDescription:(id)a0 from:(id)a1 withError:(id *)a2;
+ (id)eventsIn:(id)a0 withPredicate:(id)a1;
+ (id)sequenceEdgeEventsIn:(id)a0;
+ (id)sequenceEndEventsIn:(id)a0;
+ (id)sequenceEventsIn:(id)a0;
+ (id)sequenceStartEventsIn:(id)a0;
+ (id)shallowCopyOfUsedEventsIn:(id)a0;
+ (id)useAsDescription:(unsigned long long)a0;
+ (BOOL)useAsEnd:(id)a0 inEvents:(id)a1 withError:(id *)a2;
+ (BOOL)useAsEvent:(id)a0 inEvents:(id)a1 withError:(id *)a2;
+ (BOOL)useAsStart:(id)a0 inEvents:(id)a1 withError:(id *)a2;

- (id)initWithEntity:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)setPropertiesToFetch:(id)a0 withError:(id *)a1;
- (void)dontUseEvent;
- (id)initWithUsedPropertiesFromUsedEvent:(id)a0;
- (void)useEventAsSequenceEnd;
- (void)useEventAsSequenceEvent;
- (void)useEventAsSequenceStart;
- (id)usedPropertiesDescription;

@end

@class NSString, NSData, NSDate, WFCoreDataTrigger;

@interface WFCoreDataTriggerEvent : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL confirmed;
@property (copy, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSData *eventInfo;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) WFCoreDataTrigger *trigger;

+ (id)fetchRequest;

- (id)descriptor;

@end

@class NSString, NSData, NSDate;

@interface WFTriggerEvent : WFDatabaseObjectDescriptor

@property (readonly, copy, nonatomic) NSString *triggerID;
@property (readonly, copy, nonatomic) NSData *eventInfo;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL paused;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 triggerID:(id)a1 eventInfo:(id)a2 confirmed:(BOOL)a3 paused:(BOOL)a4 dateCreated:(id)a5;

@end

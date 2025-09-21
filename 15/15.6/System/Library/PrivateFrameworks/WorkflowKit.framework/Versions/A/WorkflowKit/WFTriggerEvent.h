@class NSString, NSData, NSDate;

@interface WFTriggerEvent : WFDatabaseObjectDescriptor

@property (readonly, copy, nonatomic) NSString *triggerID;
@property (readonly, copy, nonatomic) NSData *eventInfo;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (nonatomic) char confirmed;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 triggerID:(id)a1 eventInfo:(id)a2 confirmed:(char)a3 dateCreated:(id)a4;

@end

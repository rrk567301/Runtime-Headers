@class NSString, NSMutableArray;

@interface ABPublicAPINotificationUserInfoSynthesizer : NSObject <CNChangeHistoryEventVisitor>

@property (nonatomic) BOOL isReset;
@property (readonly, nonatomic) NSMutableArray *added;
@property (readonly, nonatomic) NSMutableArray *updated;
@property (readonly, nonatomic) NSMutableArray *removed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInfoWithEventEnumerator:(id)a0;
+ (id)userInfoWithEvents:(id)a0;

- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (id)init;
- (void)visitUpdateGroupEvent:(id)a0;
- (void)addEvent:(id)a0;
- (void)visitAddGroupEvent:(id)a0;
- (void)visitDeleteGroupEvent:(id)a0;
- (id)userInfo;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;

@end

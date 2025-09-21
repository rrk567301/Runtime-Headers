@class NSString;

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction>

@property (copy, nonatomic) NSString *note;
@property (nonatomic) char shouldPostGlobally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDarwinNotification:(id)a0 postGlobally:(char)a1;
- (void)performForChangedDefault:(id)a0;

@end

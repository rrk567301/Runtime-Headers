@class NSMutableArray;

@interface _NSDocumentSerializationObject : NSObject

@property (getter=isSynchronous) char synchronous;
@property (copy) id /* block */ grantHandler;
@property (copy) id /* block */ workBlock;
@property (getter=isAccessGranted) char accessGranted;
@property (getter=isFinished) char finished;
@property char allowingEventsForUnblocker;
@property (readonly) NSMutableArray *breadcrumbs;

- (void).cxx_destruct;
- (void)addBreadcrumb:(id)a0;
- (void)grant;

@end

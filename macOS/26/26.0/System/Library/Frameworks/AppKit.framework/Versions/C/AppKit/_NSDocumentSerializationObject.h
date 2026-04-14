@class NSMutableArray;

@interface _NSDocumentSerializationObject : NSObject

@property (getter=isSynchronous) BOOL synchronous;
@property (copy) id /* block */ grantHandler;
@property (copy) id /* block */ workBlock;
@property (getter=isAccessGranted) BOOL accessGranted;
@property (getter=isFinished) BOOL finished;
@property BOOL allowingEventsForUnblocker;
@property (readonly) NSMutableArray *breadcrumbs;

- (void)grant;
- (void).cxx_destruct;
- (void)addBreadcrumb:(id)a0;

@end

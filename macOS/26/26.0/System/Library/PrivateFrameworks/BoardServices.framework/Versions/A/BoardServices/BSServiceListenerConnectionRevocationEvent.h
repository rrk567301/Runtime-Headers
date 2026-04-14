@class NSString;

@interface BSServiceListenerConnectionRevocationEvent : NSObject <BSServiceListenerConnectionRevocationEvent>

@property (readonly, nonatomic, getter=isExplicitInitiatorInvalidation) BOOL explicitInitiatorInvalidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end

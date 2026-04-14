@class NSString;

@interface TaggedInfoTestHandler : NSObject <ConfigurableObjectProtocol, ManagedEventInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureClass:(id)a0;
+ (id)_sharedInstance;

@end

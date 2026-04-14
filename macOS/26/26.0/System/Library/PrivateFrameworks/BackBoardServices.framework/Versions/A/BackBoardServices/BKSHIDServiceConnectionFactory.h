@class NSString;

@interface BKSHIDServiceConnectionFactory : NSObject <BKSHIDServiceConnectionFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)clientConnectionForServiceWithName:(id)a0;
- (id)clientConnectionForServiceWithName:(id)a0 isNonLaunching:(BOOL *)a1;
- (id)clientConnectionForServiceWithName:(id)a0 multiplexer:(id)a1;

@end

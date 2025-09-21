@class NSString;

@interface UMLibNotifyProvider : NSObject <UMLibNotifyProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)post:(id)a0;
- (char)notificationHasPostedForToken:(int)a0 error:(id *)a1;
- (int)registerCheck:(id)a0;
- (int)registerPlain:(id)a0;
- (char)setState:(unsigned long long)a0 forToken:(int)a1;
- (unsigned long long)stateForToken:(int)a0 error:(id *)a1;

@end

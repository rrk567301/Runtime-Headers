@class NSString;

@interface LACCredentialSignpostEvent : NSObject <LACCredentialSignpostEventProvider>

@property (class, readonly, nonatomic) LACCredentialSignpostEvent *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

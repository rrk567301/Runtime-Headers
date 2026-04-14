@class SHManagedSessionDriverDaemonDelegate, NSUUID, NSString;
@protocol SHMatcher, SHMatcherDelegate, SHSessionDriverDelegate;

@interface SHManagedSessionDriver : NSObject <SHSessionDriver>

@property (readonly) SHManagedSessionDriverDaemonDelegate *daemonDelegate;
@property (readonly) id<SHMatcher, SHMatcherDelegate> serviceConnection;
@property (weak) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly) NSUUID *matchingSignatureID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

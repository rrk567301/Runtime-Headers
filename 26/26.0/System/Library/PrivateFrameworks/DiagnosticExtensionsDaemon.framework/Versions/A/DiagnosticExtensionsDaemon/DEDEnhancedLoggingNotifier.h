@class NSString, ELBugSessionStatusProvider;

@interface DEDEnhancedLoggingNotifier : NSObject <DEDNotifier, DEDSecureArchiving>

@property (retain, nonatomic) ELBugSessionStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

@end

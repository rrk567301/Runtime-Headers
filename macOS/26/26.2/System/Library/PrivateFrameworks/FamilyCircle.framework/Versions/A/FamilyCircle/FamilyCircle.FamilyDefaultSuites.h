@class NSString;

@interface FamilyCircle.FamilyDefaultSuites : NSObject

@property (class, nonatomic, readonly) NSString *familyUserDefaultsSuite;
@property (class, nonatomic, readonly) NSString *familyDaemonDefaultsSuite;

- (void).cxx_destruct;
- (id)init;

@end

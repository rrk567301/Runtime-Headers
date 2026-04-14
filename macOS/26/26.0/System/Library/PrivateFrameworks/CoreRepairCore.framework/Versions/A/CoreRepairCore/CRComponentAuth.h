@class NSString;

@interface CRComponentAuth : NSObject

@property (copy, nonatomic) NSString *componentName;

- (long long)copyComponentStatus;
- (BOOL)isComponentFailed;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkForComponentFailureInDefaults:(id)a0;
- (id)_getObjectForKeyFromDefaults:(id)a0;
- (long long)convertIORegDataToStatus:(id)a0 authPass:(id)a1;
- (id)findUnsealedData;
- (long long)getAuthCPComponentStatus:(id)a0;
- (id)initWithComponentName:(id)a0;
- (BOOL)isFirstAuthComplete;
- (long long)synchronouslycopyAuthStatus;

@end

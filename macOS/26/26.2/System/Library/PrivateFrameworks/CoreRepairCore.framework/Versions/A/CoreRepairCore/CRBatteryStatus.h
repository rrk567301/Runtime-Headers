@interface CRBatteryStatus : CRComponentAuth

- (long long)copyComponentStatus;
- (BOOL)isComponentFailed;
- (id)init;

@end

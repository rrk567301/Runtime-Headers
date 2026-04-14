@interface CRBatteryStatus : CRComponentAuth

- (BOOL)isComponentFailed;
- (long long)copyComponentStatus;
- (id)init;

@end

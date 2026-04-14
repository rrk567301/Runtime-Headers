@interface CRBatteryStatus : CRComponentAuth

- (BOOL)isComponentFailed;
- (id)init;
- (long long)copyComponentStatus;

@end

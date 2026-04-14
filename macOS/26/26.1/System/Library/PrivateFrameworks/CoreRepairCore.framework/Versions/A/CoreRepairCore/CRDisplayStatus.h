@interface CRDisplayStatus : CRComponentAuth

- (BOOL)isComponentFailed;
- (long long)copyComponentStatus;
- (id)init;

@end

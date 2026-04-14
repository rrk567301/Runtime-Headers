@interface CRTouchIDStatus : CRComponentAuth

- (long long)copyComponentStatus;
- (BOOL)isComponentFailed;
- (id)init;
- (BOOL)_isLegacyMesaInInvalidState;

@end

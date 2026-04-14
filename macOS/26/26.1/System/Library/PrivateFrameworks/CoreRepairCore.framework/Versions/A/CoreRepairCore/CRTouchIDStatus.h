@interface CRTouchIDStatus : CRComponentAuth

- (BOOL)isComponentFailed;
- (long long)copyComponentStatus;
- (id)init;
- (BOOL)_isLegacyMesaInInvalidState;

@end

@interface CRTouchIDStatus : CRComponentAuth

- (id)init;
- (long long)copyComponentStatus;
- (BOOL)isComponentFailed;
- (BOOL)_isLegacyMesaInInvalidState;

@end

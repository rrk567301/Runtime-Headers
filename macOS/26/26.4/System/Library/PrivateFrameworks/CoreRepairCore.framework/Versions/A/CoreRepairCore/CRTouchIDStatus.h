@interface CRTouchIDStatus : CRComponentAuth

- (BOOL)isComponentFailed;
- (id)init;
- (long long)copyComponentStatus;
- (BOOL)_isLegacyMesaInInvalidState;

@end

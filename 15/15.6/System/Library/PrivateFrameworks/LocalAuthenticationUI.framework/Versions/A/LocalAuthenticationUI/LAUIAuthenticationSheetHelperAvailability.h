@protocol LAUIAuthenticationSheetState;

@interface LAUIAuthenticationSheetHelperAvailability : NSObject {
    id<LAUIAuthenticationSheetState> _state;
}

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (char)isSPIAvailable:(id *)a0;
- (char)isCompanionDeviceAvailable:(id *)a0;
- (char)isTouchIDAvailable:(id *)a0;

@end

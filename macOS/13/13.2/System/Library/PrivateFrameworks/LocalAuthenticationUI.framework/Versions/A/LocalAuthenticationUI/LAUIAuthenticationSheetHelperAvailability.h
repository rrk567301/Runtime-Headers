@protocol LAUIAuthenticationSheetState;

@interface LAUIAuthenticationSheetHelperAvailability : NSObject {
    id<LAUIAuthenticationSheetState> _state;
}

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (BOOL)isAppleWatchAvailable:(id *)a0;
- (BOOL)isTouchIDAvailable:(id *)a0;
- (BOOL)isSPIAvailable:(id *)a0;

@end

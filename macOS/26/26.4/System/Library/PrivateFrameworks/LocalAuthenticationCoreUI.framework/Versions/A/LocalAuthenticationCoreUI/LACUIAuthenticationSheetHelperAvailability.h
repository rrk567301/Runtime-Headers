@protocol LACUIAuthenticationSheetState, LACContextProviding;

@interface LACUIAuthenticationSheetHelperAvailability : NSObject {
    id<LACUIAuthenticationSheetState> _state;
}

@property (weak, nonatomic) id<LACContextProviding> contextProvider;

- (void).cxx_destruct;
- (BOOL)isSPIAvailable:(id *)a0;
- (id)initWithState:(id)a0 contextProvider:(id)a1;
- (BOOL)isCompanionDeviceAvailable:(id *)a0;
- (BOOL)isTouchIDAvailable:(id *)a0;

@end

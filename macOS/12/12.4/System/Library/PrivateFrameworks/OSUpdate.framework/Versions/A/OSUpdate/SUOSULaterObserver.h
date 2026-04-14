@class NSDate;
@protocol SUOSULaterDelegate;

@interface SUOSULaterObserver : NSObject

@property BOOL isArmed;
@property (retain) NSDate *estimatedFireDate;
@property (weak) id<SUOSULaterDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)onACPower;
- (void)disarmLaterObserver;
- (void)armObserver;
- (BOOL)isDarkWake;
- (BOOL)isMaintenanceDarkWake;

@end

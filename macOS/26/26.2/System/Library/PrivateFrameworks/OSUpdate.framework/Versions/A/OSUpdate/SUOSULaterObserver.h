@class NSDate;
@protocol SUOSULaterDelegate;

@interface SUOSULaterObserver : NSObject

@property BOOL isArmed;
@property BOOL isSimulated;
@property (retain) NSDate *estimatedFireDate;
@property (weak) id<SUOSULaterDelegate> delegate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (void)armObserver;
- (void)disarmLaterObserver;

@end

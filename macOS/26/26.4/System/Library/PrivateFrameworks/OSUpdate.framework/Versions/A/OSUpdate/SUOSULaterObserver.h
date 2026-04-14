@class NSDate;
@protocol SUOSULaterDelegate;

@interface SUOSULaterObserver : NSObject

@property BOOL isArmed;
@property BOOL isSimulated;
@property (retain) NSDate *estimatedFireDate;
@property (weak) id<SUOSULaterDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)armObserver;
- (void)disarmLaterObserver;

@end

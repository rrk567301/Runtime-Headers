@class NSDate;
@protocol SUOSULaterDelegate;

@interface SUOSULaterObserver : NSObject

@property BOOL isArmed;
@property BOOL isSimulated;
@property (retain) NSDate *estimatedFireDate;
@property (weak) id<SUOSULaterDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)armObserver;
- (void)disarmLaterObserver;

@end

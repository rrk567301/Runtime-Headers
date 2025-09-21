@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject

@property (retain, nonatomic) FTCServiceMonitor *monitor;
@property (readonly, retain, nonatomic) NSMutableSet *listeners;

- (void)dealloc;
- (id)initWithServiceType:(long long)a0;
- (char)addListenerID:(id)a0;
- (char)hasListenerID:(id)a0;
- (char)removeListenerID:(id)a0;

@end

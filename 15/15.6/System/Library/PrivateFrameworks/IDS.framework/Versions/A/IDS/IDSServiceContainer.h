@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject

@property (retain, nonatomic) IDSServiceMonitor *monitor;
@property (readonly, nonatomic) NSMutableSet *listeners;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (char)addListenerID:(id)a0;
- (char)hasListenerID:(id)a0;
- (char)removeListenerID:(id)a0;

@end

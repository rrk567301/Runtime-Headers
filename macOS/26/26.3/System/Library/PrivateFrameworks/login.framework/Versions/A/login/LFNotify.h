@class LFListener, NSMutableDictionary, LFConnection;

@interface LFNotify : NSObject

@property LFConnection *connection;
@property LFListener *listener;
@property (retain) NSMutableDictionary *tokenMap;

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_nameForSelector:(SEL)a0 inProtocol:(id)a1;
- (void)_registerProtocolMethods;
- (id)initWithListener:(id)a0;
- (void)sendSelector:(SEL)a0;

@end

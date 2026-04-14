@class NSSet, NSString, NSMutableArray, _GCSystemButton;

@interface GCSystemButtonServer : NSObject <NSObject> {
    NSMutableArray *_buttons;
    NSMutableArray *_responders;
    NSMutableArray *_clients;
}

@property (readonly) _GCSystemButton *activeButton;
@property (readonly) NSSet *responders;
@property (readonly) BOOL hasButtonThief;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)acceptConnection:(id)a0 fromProcess:(id)a1;
- (id)activeProcessRespondingToSystemButton:(id)a0;
- (id)systemButtonAvailableWithLocalizedName:(id)a0 sfSymbolName:(id)a1;
- (BOOL)tryHandleButtonPress;

@end

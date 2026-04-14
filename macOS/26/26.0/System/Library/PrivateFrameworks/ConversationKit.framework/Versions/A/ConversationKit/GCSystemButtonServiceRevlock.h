@class NSString, NSObject;

@interface GCSystemButtonServiceRevlock : NSObject {
    NSObject *service;
}

@property (readonly, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolName;

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)beginConsumingPressesWithReason:(id)a0 consumer:(id)a1 priority:(long long)a2;

@end

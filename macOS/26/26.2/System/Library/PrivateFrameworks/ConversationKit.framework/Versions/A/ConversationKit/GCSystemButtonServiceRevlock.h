@class NSString, NSObject;

@interface GCSystemButtonServiceRevlock : NSObject {
    NSObject *service;
}

@property (readonly, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolName;

+ (id)sharedInstance;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (id)beginConsumingPressesWithReason:(id)a0 consumer:(id)a1 priority:(long long)a2;

@end

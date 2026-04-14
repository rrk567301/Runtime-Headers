@class NSMutableDictionary;

@interface LACKeyBagProvider : NSObject {
    NSMutableDictionary *_userKeybags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) LACKeyBagProvider *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)keybagForUserId:(unsigned int)a0;

@end

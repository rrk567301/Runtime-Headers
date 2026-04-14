@class NSString, NSMutableDictionary;

@interface LACKeyBagProvider : NSObject <LACKeyBagProvider> {
    NSMutableDictionary *_userKeybags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) LACKeyBagProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)keybagForUserId:(unsigned int)a0;

@end

@class NSMutableDictionary;

@interface LACKeyBagProvider : NSObject {
    NSMutableDictionary *_userKeybags;
}

@property (class, readonly, nonatomic) LACKeyBagProvider *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)keybagForUserId:(unsigned int)a0;

@end

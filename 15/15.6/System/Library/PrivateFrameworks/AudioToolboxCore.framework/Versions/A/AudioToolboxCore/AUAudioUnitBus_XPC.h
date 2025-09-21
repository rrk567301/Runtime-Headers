@class AUAudioUnit_XPC, NSArray, NSXPCConnection, AVAudioFormat;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {
    AUAudioUnit_XPC *_audioUnit;
    NSXPCConnection *_remoteAUXPCConnection;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
    BOOL _removingObserverWithContext;
}

@property (class, readonly) char supportsSecureCoding;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (char)isEnabled;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)format;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)propertyChanged:(id)a0;
- (char)setFormat:(id)a0 error:(id *)a1;

@end

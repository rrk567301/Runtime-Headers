@class NSString, NSData, BKSHIDKeyboardDeviceProperties;

@interface BKSHIDKeyboardDevice : NSObject <BSDescriptionStreaming, BKSHIDKeyboardDevicePropertiesProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDKeyboardDeviceProperties *_lock_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSString *transport;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *layout;
@property (readonly, copy, nonatomic) NSString *exclusivityIdentifier;
@property (readonly, copy, nonatomic) NSData *platformInputModeConfiguration;
@property (readonly, nonatomic) unsigned char countryCode;
@property (readonly, nonatomic) unsigned int standardType;
@property (readonly, nonatomic) long long subinterfaceID;
@property (readonly, nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (readonly, nonatomic) BOOL globeKeyLabelHasGlobeSymbol;

+ (id)new;

- (unsigned long long)senderID;
- (id)transport;
- (BOOL)capsLockKeyHasLanguageSwitchLabel;
- (void)appendDescriptionToStream:(id)a0;
- (id)layout;
- (id)language;
- (id)init;
- (unsigned char)countryCode;
- (id)_initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)_properties;
- (void)_replaceProperties:(id)a0;
- (void)appendDescriptionToStream:(id)a0 fromProxy:(id)a1;
- (id)exclusivityIdentifier;
- (BOOL)globeKeyLabelHasGlobeSymbol;
- (id)platformInputModeConfiguration;
- (unsigned int)standardType;
- (long long)subinterfaceID;

@end

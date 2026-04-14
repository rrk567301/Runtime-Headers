@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0;
+ (id)touchScreenDigitizerSender;
+ (id)keyboardSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)pencilDigitizerSender;
+ (id)mouseSender;
+ (id)trackpadSender;
+ (id)gamepadSender;
+ (id)tvRemoteSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

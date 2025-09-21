@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)crownSender;
+ (id)tvRemoteSender;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)pencilDigitizerSender;
+ (id)mouseSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)touchScreenDigitizerSender;
+ (id)phoneButtonSender;
+ (id)naturalInputCollectionSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0;
+ (id)globalPositionSender;
+ (id)keyboardSender;
+ (id)gamepadSender;
+ (id)trackpadSender;

- (id)senderPropertiesWithDisplayUUID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

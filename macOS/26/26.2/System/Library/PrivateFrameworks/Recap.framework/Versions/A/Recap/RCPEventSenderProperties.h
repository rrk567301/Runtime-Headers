@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)gamepadSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)mouseSender;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)globalPositionSender;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)pencilDigitizerSender;
+ (id)senderWithProperties:(id)a0;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)crownSender;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)naturalInputCollectionSender;
+ (id)touchScreenDigitizerSender;
+ (id)phoneButtonSender;
+ (id)keyboardSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)tvRemoteSender;
+ (id)trackpadSender;

- (id)senderPropertiesWithDisplayUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

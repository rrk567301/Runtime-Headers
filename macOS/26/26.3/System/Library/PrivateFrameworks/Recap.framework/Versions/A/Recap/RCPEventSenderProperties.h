@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)keyboardSender;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)trackpadSender;
+ (id)phoneButtonSender;
+ (id)touchScreenDigitizerSender;
+ (id)pencilDigitizerSender;
+ (id)mouseSender;
+ (id)tvRemoteSender;
+ (id)crownSender;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)senderWithProperties:(id)a0;
+ (id)gamepadSender;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)naturalInputCollectionSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)globalPositionSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;

- (id)senderPropertiesWithDisplayUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end

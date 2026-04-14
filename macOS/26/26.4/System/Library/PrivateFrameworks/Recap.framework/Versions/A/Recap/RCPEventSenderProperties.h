@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)trackpadSender;
+ (id)senderWithProperties:(id)a0;
+ (id)mouseSender;
+ (id)keyboardSender;
+ (id)phoneButtonSender;
+ (id)gamepadSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)naturalInputCollectionSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)globalPositionSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)pencilDigitizerSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)tvRemoteSender;
+ (id)touchScreenDigitizerSender;
+ (id)crownSender;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)senderPropertiesWithDisplayUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

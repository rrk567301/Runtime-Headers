@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    BOOL _sendsMousePointerEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL sendsMousePointerEvents;

+ (id)gamepadSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)trackpadSender;
+ (id)pencilDigitizerSender;
+ (BOOL)_isMouseSender:(id)a0;
+ (id)naturalInputCollectionSender;
+ (id)touchScreenDigitizerSender;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)crownSender;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)mouseSender;
+ (id)phoneButtonSender;
+ (id)globalPositionSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;
+ (id)keyboardSender;
+ (id)tvRemoteSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)senderPropertiesWithDisplayUUID:(id)a0;

@end

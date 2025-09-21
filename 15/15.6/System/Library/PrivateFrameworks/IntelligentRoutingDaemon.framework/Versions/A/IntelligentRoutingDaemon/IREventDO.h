@class NSString;

@interface IREventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventSubType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) char isOutsideApp;
@property (readonly, nonatomic) char isEligibleApp;

+ (id)atvUserInteractionEvents;
+ (id)eventDOWithAppleTVControlType:(long long)a0;
+ (id)eventDOWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4 isOutsideApp:(char)a5 isEligibleApp:(char)a6;
+ (id)eventDOWithMediaType:(long long)a0;
+ (id)eventDOWithMediaType:(long long)a0 bundleID:(id)a1;
+ (id)mediaBrokeredDeviceEvents;
+ (id)mediaUserInteractionEvents;
+ (id)pickerChoiceEvents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementEventType:(long long)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementBundleID:(id)a0;
- (id)copyWithReplacementContextIdentifier:(id)a0;
- (id)copyWithReplacementEventSubType:(long long)a0;
- (id)copyWithReplacementIsEligibleApp:(char)a0;
- (id)copyWithReplacementIsOutsideApp:(char)a0;
- (id)exportAsDictionary;
- (id)initWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4 isOutsideApp:(char)a5 isEligibleApp:(char)a6;
- (char)isBannerEvent;
- (char)isEqualToEventDO:(id)a0;
- (char)isPickerChoiceEvent;
- (char)isUserIntentionEvent;

@end

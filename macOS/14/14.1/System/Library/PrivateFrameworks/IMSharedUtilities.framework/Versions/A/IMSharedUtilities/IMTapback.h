@class NSString;

@interface IMTapback : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) NSString *representation;
@property (readonly, nonatomic) IMTapback *visibleTapbackCounterpart;
@property (readonly, nonatomic) IMTapback *removedTapbackCounterpart;
@property (readonly, nonatomic) IMTapback *counterpart;
@property (readonly, nonatomic, getter=isRemoved) BOOL removed;
@property (readonly, nonatomic, getter=isSendable) BOOL sendable;
@property (readonly, nonatomic) NSString *serializedTapbackString;

+ (BOOL)isValidAssociatedMessageType:(long long)a0;
+ (BOOL)isValidRepresentation:(id)a0;
+ (id)tapbackWithAssociatedMessageType:(long long)a0 messageSummaryInfo:(id)a1;
+ (id)tapbackWithAssociatedMessageType:(long long)a0 messageSummaryInfo:(id)a1 usePlaceholderEmojiIfNeeded:(BOOL)a2;
+ (id)tapbackWithAssociatedMessageType:(long long)a0 representation:(id)a1;
+ (id)tapbackWithAssociatedMessageType:(long long)a0 representation:(id)a1 usePlaceholderEmojiIfNeeded:(BOOL)a2;
+ (id)tapbackWithSerializedString:(id)a0;
+ (id)tapbacksForAssociatedMessageTypes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)actionString;
- (id)previewStringWithMessageSummaryInfo:(id)a0 senderDisplayName:(id)a1 isFromMe:(BOOL)a2;
- (id)backwardCompatibilityStringFormatForMessageSummaryInfo:(id)a0;
- (id)backwardCompatibilityStringWithMessageSummaryInfo:(id)a0;
- (id)contentTypeStringForMessageSummaryInfo:(id)a0;
- (id)initWithAssociatedMessageType:(long long)a0;
- (id)initWithAssociatedMessageType:(long long)a0 representation:(id)a1;
- (id)longContentTypeStringForPluginBundleID:(id)a0 pluginDisplayName:(id)a1;
- (id)previewStringFormatForMessageSummaryInfo:(id)a0 isFromMe:(BOOL)a1;
- (BOOL)shouldQuoteContentString:(id)a0;

@end

@class NSString, UTType, NSURL, NSSet, NSNumber;

@interface IMCollaborationNoticeMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *typeNumber;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) UTType *contentType;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSSet *targetChatGUIDs;

+ (id)metadataWithType:(long long)a0 bundleIdentifier:(id)a1 contentURL:(id)a2 contentTitle:(id)a3 contentType:(id)a4 messageGUID:(id)a5;
+ (id)metadataWithType:(long long)a0 bundleIdentifier:(id)a1 contentURL:(id)a2 contentTitle:(id)a3 contentType:(id)a4 messageGUID:(id)a5 targetChatGUIDs:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithNoticeType:(long long)a0 bundleIdentifier:(id)a1 contentURL:(id)a2 contentTitle:(id)a3 contentType:(id)a4 messageGUID:(id)a5 targetChatGUIDs:(id)a6;

@end

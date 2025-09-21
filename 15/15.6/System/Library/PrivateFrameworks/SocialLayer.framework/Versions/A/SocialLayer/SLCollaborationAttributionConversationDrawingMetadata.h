@class NSURL, NSArray, NSString;

@interface SLCollaborationAttributionConversationDrawingMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isGroupConversation;
@property (readonly, nonatomic) NSURL *groupPhotoFileURL;
@property (readonly, nonatomic) NSArray *recipientDrawingMetadata;
@property (readonly, nonatomic) NSString *groupID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupPhotoFileURL:(id)a0 recipientDrawingMetadata:(id)a1 groupID:(id)a2;
- (id)initWithRecipientDrawingMetadata:(id)a0;

@end

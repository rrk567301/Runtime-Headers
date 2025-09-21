@class _SWCollaborationMetadata, NSString, NSArray, NSURL, SLPerson, NSUUID, NSDate;

@interface SLAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isLean) char lean;
@property (readonly, copy, nonatomic) NSString *sourceAppDisplayName;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic, getter=isPinned) char pinned;
@property (readonly, nonatomic) char isGroupConversation;
@property (readonly, copy, nonatomic) NSURL *groupPhotoPath;
@property (readonly, copy, nonatomic) NSString *groupDisplayName;
@property (readonly, nonatomic) NSArray *relatedPersons;
@property (readonly, nonatomic) SLPerson *sender;
@property (readonly, nonatomic, getter=isFromMe) char fromMe;
@property (readonly, nonatomic) NSUUID *groupID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *attachmentGUID;
@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;

+ (id)errorForAttributionDomain:(id)a0 andCode:(long long)a1 andUnderlyingError:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithPortraitAttribution:(id)a0 error:(id *)a1;
- (id)portraitAttribution;

@end

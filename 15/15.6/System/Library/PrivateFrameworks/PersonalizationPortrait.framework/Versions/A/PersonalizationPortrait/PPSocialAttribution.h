@class NSString, NSArray, NSURL, NSDate, NSData, PPSocialPerson;

@interface PPSocialAttribution : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sourceAppDisplayName;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSURL *groupPhotoPath;
@property (readonly, nonatomic) NSString *groupDisplayName;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) PPSocialPerson *sender;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSData *collaborationMetadata;
@property (readonly, nonatomic, getter=isStarred) char starred;
@property (readonly, nonatomic, getter=isFromMe) char fromMe;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 groupId:(id)a5 relatedPeople:(id)a6 sender:(id)a7 timestamp:(id)a8 collaborationMetadata:(id)a9 starred:(char)a10 fromMe:(char)a11;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 collaborationMetadata:(id)a8 starred:(char)a9 fromMe:(char)a10;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 starred:(char)a8;
- (id)initWithIdentifier:(id)a0 sourceAppDisplayName:(id)a1 conversationIdentifier:(id)a2 groupPhotoPath:(id)a3 groupDisplayName:(id)a4 relatedPeople:(id)a5 sender:(id)a6 timestamp:(id)a7 starred:(char)a8 fromMe:(char)a9;

@end

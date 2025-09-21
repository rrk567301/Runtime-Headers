@class NSString, NSUUID, NSURL, NSDate, NSData;

@interface FTLocalMessage : NSManagedObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSUUID *callUUID;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSString *from;
@property (nonatomic) char isRead;
@property (nonatomic) char isRTT;
@property (nonatomic) char isSensitive;
@property (nonatomic) short mailboxType;
@property (nonatomic, copy) NSURL *messageFile;
@property (nonatomic, copy) NSURL *messageThumbnail;
@property (nonatomic) short messageType;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *recipient;
@property (nonatomic, copy) NSUUID *recordUUID;
@property (nonatomic, copy) NSString *simID;
@property (nonatomic, copy) NSString *thumbnailType;
@property (nonatomic, copy) NSURL *transcript;
@property (nonatomic, copy) NSData *transcriptData;
@property (nonatomic) short transcriptionStatus;
@property (nonatomic, copy) NSString *transcriptType;
@property (nonatomic) int voicemailID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end

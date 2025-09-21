@class NSURL, NSString, NSDate;

@interface CalCalendarMigrationPublicationInfo : NSObject

@property (readonly, nonatomic) NSURL *calendarDirectory;
@property (retain, nonatomic) NSURL *publishedURL;
@property (retain, nonatomic) NSString *calendarUUID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) char automaticallyPublishChanges;
@property (nonatomic) char filterAlarms;
@property (nonatomic) char filterAttachments;
@property (nonatomic) char filterTitleAndNotes;

- (void).cxx_destruct;
- (id)dictionaryForAccountProperties;
- (id)initWithPublishedURL:(id)a0 calendarDirectory:(id)a1 calendarUUID:(id)a2;

@end

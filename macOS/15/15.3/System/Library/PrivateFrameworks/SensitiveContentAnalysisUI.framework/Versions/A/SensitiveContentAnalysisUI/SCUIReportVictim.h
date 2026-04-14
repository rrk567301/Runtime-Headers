@class NSString, NSArray, NSDate, SCUIReportAddress;

@interface SCUIReportVictim : NSObject

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSArray *mediaFiles;
@property (copy) NSString *accountID;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (copy) NSString *appleID;
@property (copy) NSString *phoneNumber;
@property (copy) NSDate *dateOfBirth;
@property (retain) SCUIReportAddress *address;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 mediaFiles:(id)a1;

@end

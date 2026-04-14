@class NSString, SCUIReportAddress, NSDate;

@interface SCUIReportVictim : NSObject

@property (readonly, copy) NSString *displayName;
@property (copy) NSString *accountID;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (copy) NSString *appleID;
@property (copy) NSString *phoneNumber;
@property (copy) NSDate *dateOfBirth;
@property (retain) SCUIReportAddress *address;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0;

@end

@class NSString, NSArray, SCUIReportAddress;

@interface SCUIReportSuspect : NSObject

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSArray *sensitiveMediaFiles;
@property (copy) NSString *accountID;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (copy) NSString *phoneNumber;
@property (copy) SCUIReportAddress *address;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 sensitiveMediaFiles:(id)a1;

@end

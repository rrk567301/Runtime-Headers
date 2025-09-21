@class NSString, CoreDAVResourceTypeItem, NSURL, CoreDAVSupportedReportSetItem, NSSet, NSDictionary;

@interface CoreDAVContainer : NSObject

@property (retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) char isUnauthenticated;
@property (retain, nonatomic) CoreDAVResourceTypeItem *resourceType;
@property (retain, nonatomic) NSString *containerTitle;
@property (retain, nonatomic) NSSet *privileges;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSURL *resourceID;
@property (retain, nonatomic) NSString *quotaAvailable;
@property (retain, nonatomic) NSString *quotaUsed;
@property (readonly, nonatomic) NSSet *supportedReports;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property (readonly, nonatomic) char isPrincipal;
@property (readonly, nonatomic) NSSet *privilegesAsStringSet;
@property (readonly, nonatomic) char hasReadPrivileges;
@property (readonly, nonatomic) char hasWriteContentPrivileges;
@property (readonly, nonatomic) char hasWritePropertiesPrivileges;
@property (readonly, nonatomic) char hasBindPrivileges;
@property (readonly, nonatomic) char hasUnbindPrivileges;
@property (readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property (readonly, nonatomic) char supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) char supportsSyncCollectionReport;

+ (id)copyPropertyMappingsForParser;
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)postProcessWithResponseHeaders:(id)a0;
- (void)applyParsedProperties:(id)a0;
- (id)initWithURL:(id)a0 andProperties:(id)a1;
- (char)_anyPrivilegesMatches:(id /* block */)a0;

@end

@class NSString, NSDictionary, AMSDialogRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain) AMSDialogRequest *dialogRequest;
@property (retain) AMSEngagementRequest *engagementRequest;
@property (retain) NSDictionary *placements;
@property (retain) NSString *serviceType;
@property (retain) NSDictionary *placementRequests;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)_makeEngagementRequestWithDictionary:(id)a0;
- (id)_placementWithDictionary:(id)a0;
- (id)_placementRequestsWithDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;

@end

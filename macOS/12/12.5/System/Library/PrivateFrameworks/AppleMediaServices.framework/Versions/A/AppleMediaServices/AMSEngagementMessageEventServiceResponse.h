@class NSString, NSDictionary, AMSEngagementMessageRequest, AMSDialogRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain) AMSEngagementRequest *engagementRequest;
@property (retain) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (retain) NSDictionary *placements;
@property (retain) NSString *serviceType;
@property (retain) NSDictionary *placementRequests;
@property (retain) AMSDialogRequest *dialogRequest;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)_placementWithDictionary:(id)a0;
- (id)_placementRequestsWithDictionary:(id)a0;

@end

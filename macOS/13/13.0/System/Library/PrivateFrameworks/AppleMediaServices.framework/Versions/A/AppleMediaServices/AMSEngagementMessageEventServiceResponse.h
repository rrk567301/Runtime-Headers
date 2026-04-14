@class NSString, NSDictionary, AMSEngagementMessageRequest, AMSDialogRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain) AMSEngagementRequest *engagementRequest;
@property (retain) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (retain) NSDictionary *placementsMap;
@property (retain) NSString *serviceType;
@property (retain) NSDictionary *placementRequests;
@property (retain) AMSDialogRequest *dialogRequest;
@property (retain) NSDictionary *placements;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)_placementsMapWithPayload:(id)a0;
- (id)_placementRequestsWithDictionary:(id)a0;

@end

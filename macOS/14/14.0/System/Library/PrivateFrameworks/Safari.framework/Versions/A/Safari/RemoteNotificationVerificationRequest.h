@class NSString;
@protocol RemoteNotificationControllerClient;

@interface RemoteNotificationVerificationRequest : NSObject

@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, copy, nonatomic) NSString *websiteIdentifier;
@property (copy, nonatomic) NSString *websiteName;
@property (weak, nonatomic) id<RemoteNotificationControllerClient> controllerClient;

- (void).cxx_destruct;
- (id)initWithWithID:(unsigned long long)a0 websiteIdentifier:(id)a1 controllerClient:(id)a2;

@end

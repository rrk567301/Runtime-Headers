@class NSString, CCDonateConnection, CCDonateRequestManager, CCDevice;
@protocol BMAccessAssertion;

@interface CCDonateRequest : NSObject {
    CCDonateConnection *_connection;
    CCDonateRequestManager *_manager;
    unsigned long long _requestQueuedSignpostId;
    unsigned long long _requestHandledSignpostId;
}

@property (readonly, nonatomic) unsigned int requestId;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *validity;
@property (readonly, nonatomic) CCDevice *remoteDevice;
@property (readonly, nonatomic) id<BMAccessAssertion> accessAssertion;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)handle;
- (void)timeout;
- (id)_connectionTypeString;
- (id)initWithConnection:(id)a0 manager:(id)a1 itemType:(unsigned short)a2 encodedDescriptors:(id)a3 personaIdentifier:(id)a4 version:(unsigned long long)a5 validity:(id)a6 remoteDevice:(id)a7 accessAssertion:(id)a8;
- (BOOL)isEqualToDonateRequest:(id)a0;
- (void)terminateWithType:(long long)a0;

@end

@class NSDictionary, NSString, NSArray;

@interface QueryController : NSObject <PRSSessionController, PARResultFactory> {
    NSString *_userId;
}

@property double gSessionStartTime;
@property (retain) NSDictionary *cep_server_values;
@property (readonly, nonatomic) double sessionStartTime;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *applicationNameForUserAgent;
@property (readonly, nonatomic) NSArray *excludedDomainIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)userId;
- (void)setUserId:(id)a0;
- (void)sessionReceivedBagWithEnabledDomains:(id)a0;
- (void)updateCorrectionDict:(id)a0;
- (id)createResultObject;
- (void)setCepServerValues:(id)a0;
- (id)supportedDomainIdentifiers;

@end

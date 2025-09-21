@class NSDictionary, NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSString *_flag;
    char _enabled;
}

@property (retain, nonatomic) NSDictionary *ephemeralAuthResults;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithFamilyMemberDSID:(id)a0 ephemeralAuthResults:(id)a1 flag:(id)a2 enabled:(char)a3;
- (id)initWithFamilyMemberDSID:(id)a0 flag:(id)a1 enabled:(char)a2;

@end

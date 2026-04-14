@class NSString;

@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
}

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;

@end

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard *_smartCard;
    BOOL _hasSession;
}

@property (readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (id)name;
- (id)initWithToken:(id)a0;
- (void)endRequest;
- (void)beginRequest;
- (id)getSmartCardWithError:(id *)a0;

@end

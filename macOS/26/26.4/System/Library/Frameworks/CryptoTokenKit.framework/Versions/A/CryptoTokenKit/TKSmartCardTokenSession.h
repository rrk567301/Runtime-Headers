@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard *_smartCard;
    BOOL _hasSession;
}

@property (readonly) TKSmartCard *smartCard;

- (id)initWithToken:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)endRequest;
- (void)beginRequest;
- (id)getSmartCardWithError:(id *)a0;

@end

@class NSString, NSObject, CKVDonateConnection;
@protocol CKVDonateRequestDelegate;

@interface CKVDonateRequest : NSObject {
    CKVDonateConnection *_connection;
    NSObject<CKVDonateRequestDelegate> *_delegate;
    unsigned long long _donationRequestQueuedSignpostId;
    unsigned long long _donationRequestHandlingSignpostId;
}

@property (readonly, nonatomic) unsigned int requestId;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *validity;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) unsigned short options;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)handle;
- (void).cxx_destruct;
- (void)interrupt;
- (BOOL)isIncremental;
- (id)initWithConnection:(id)a0 delegate:(id)a1 version:(unsigned long long)a2 validity:(id)a3 itemType:(long long)a4 originAppId:(id)a5 deviceId:(id)a6 userId:(id)a7 options:(unsigned short)a8;
- (void)_resolveOriginAppId:(id)a0 itemType:(long long)a1;
- (void)terminateWithOptions:(unsigned short)a0 terminationType:(long long)a1;
- (BOOL)isEqualToDonateRequest:(id)a0;
- (BOOL)isRanked;
- (BOOL)hasImplicitVersion;
- (id)_connectionTypeString;

@end

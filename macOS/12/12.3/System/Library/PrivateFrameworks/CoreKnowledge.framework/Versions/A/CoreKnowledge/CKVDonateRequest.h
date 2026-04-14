@class NSString, CKVDonateConnection;

@interface CKVDonateRequest : NSObject {
    CKVDonateConnection *_connection;
}

@property (readonly, nonatomic) unsigned int requestId;
@property (readonly, nonatomic) unsigned long long version;
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
- (void)timeout;
- (BOOL)isEqualToDonateRequest:(id)a0;
- (id)initWithConnection:(id)a0 version:(unsigned long long)a1 itemType:(long long)a2 originAppId:(id)a3 deviceId:(id)a4 userId:(id)a5 options:(unsigned short)a6;

@end

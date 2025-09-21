@class NSString, NSNumber, NSData;

@interface MTContentKeyRequest : NSObject {
    void /* function */ keyIdentifier;
    void /* function */ adamId;
    void /* function */ requestData;
    void /* unknown type, empty encoding */ requestType;
    void /* unknown type, empty encoding */ offlineRequest;
    void /* unknown type, empty encoding */ requestDate;
    void /* unknown type, empty encoding */ requestID;
}

@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSString *adamId;
@property (nonatomic, readonly) NSNumber *secureInvalidationDsid;
@property (nonatomic, copy) NSData *requestData;

- (id)init;
- (void).cxx_destruct;
- (id)copyWith:(long long)a0;
- (id)initFrom:(id)a0 adamId:(id)a1 requestType:(long long)a2 offlineRequest:(BOOL)a3;
- (id)initWithKeyIdentifier:(id)a0 adamId:(id)a1 requestType:(long long)a2 offlineRequest:(BOOL)a3 secureInvalidationDsid:(id)a4;

@end

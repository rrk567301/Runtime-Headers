@class MTContentKeyRequest, NSData, NSError, NSDate;

@interface MTContentKeyResponse : NSObject {
    void /* unknown type, empty encoding */ renewalDate;
    void /* function */ error;
    void /* function */ keyData;
}

@property (nonatomic, readonly) MTContentKeyRequest *request;
@property (nonatomic, readonly) NSDate *renewalDate;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSData *keyData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 keyData:(id)a1 renewalDate:(id)a2 error:(id)a3;

@end

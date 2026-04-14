@class NSString;

@interface WKISO18013Request : NSObject {
    void /* function */ encryptionInfo;
    void /* function */ deviceRequest;
}

@property (nonatomic, copy) NSString *encryptionInfo;
@property (nonatomic, copy) NSString *deviceRequest;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEncryptionInfo:(id)a0 deviceRequest:(id)a1;

@end

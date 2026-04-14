@class NSString, NSData;

@interface WKIdentityDocumentPresentmentRawRequest : NSObject {
    void /* function */ requestProtocol;
    void /* function */ requestData;
}

@property (nonatomic, readonly) NSString *requestProtocol;
@property (nonatomic, readonly) NSData *requestData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequestProtocol:(id)a0 requestData:(id)a1;

@end

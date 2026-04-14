@class NSString, NSData;

@interface WKIdentityDocumentPresentmentResponse : NSObject {
    void /* function */ protocolString;
    void /* function */ responseData;
}

@property (nonatomic, readonly) NSString *protocolString;
@property (nonatomic, readonly) NSData *responseData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProtocolString:(id)a0 responseData:(id)a1;

@end

@class NSString, NSData;

@interface WKIdentityDocumentPresentmentResponse : NSObject {
    void /* function */ protocolString;
    void /* function */ responseData;
}

@property (nonatomic, readonly) NSString *protocolString;
@property (nonatomic, readonly) NSData *responseData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProtocolString:(id)a0 responseData:(id)a1;

@end

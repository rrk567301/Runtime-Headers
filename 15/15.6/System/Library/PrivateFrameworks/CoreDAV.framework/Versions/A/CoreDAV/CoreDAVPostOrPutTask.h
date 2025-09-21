@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
    char _sendOrder;
}

@property (retain, nonatomic) NSString *requestDataContentType;
@property (retain, nonatomic) NSData *requestDataPayload;
@property (nonatomic) char forceToServer;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSString *previousETag;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)initWithDataPayload:(id)a0 dataContentType:(id)a1 atURL:(id)a2 previousETag:(id)a3;

@end

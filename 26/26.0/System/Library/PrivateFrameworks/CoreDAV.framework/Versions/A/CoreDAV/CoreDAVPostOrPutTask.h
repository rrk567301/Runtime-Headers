@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSString *requestDataContentType;
@property (retain, nonatomic) NSData *requestDataPayload;
@property (nonatomic) BOOL forceToServer;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSString *previousETag;

- (id)requestBody;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)initWithDataPayload:(id)a0 dataContentType:(id)a1 atURL:(id)a2 previousETag:(id)a3;

@end

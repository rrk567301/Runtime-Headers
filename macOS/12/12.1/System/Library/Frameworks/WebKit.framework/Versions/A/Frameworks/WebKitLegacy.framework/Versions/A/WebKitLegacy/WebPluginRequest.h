@class NSURLRequest, NSString;

@interface WebPluginRequest : NSObject {
    NSURLRequest *_request;
    NSString *_frameName;
    void *_notifyData;
    BOOL _didStartFromUserGesture;
    BOOL _sendNotification;
}

- (void)dealloc;
- (id)request;
- (id)frameName;
- (void *)notifyData;
- (BOOL)isCurrentEventUserGesture;
- (BOOL)sendNotification;
- (id)initWithRequest:(id)a0 frameName:(id)a1 notifyData:(void *)a2 sendNotification:(BOOL)a3 didStartFromUserGesture:(BOOL)a4;

@end

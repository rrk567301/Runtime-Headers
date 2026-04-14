@class NSObject;
@protocol OS_nw_connection, OS_dispatch_data;

@interface BodyWriter : NSObject {
    unsigned long long _totalBytesSent;
}

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *postData;
@property (nonatomic) unsigned long long bytesLeftToPost;
@property (nonatomic) unsigned int postWriteSize;
@property (nonatomic) unsigned int totalExpectedBytes;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)init;
- (void)callCompletionHandlerWithBytesSent:(unsigned long long)a0;
- (void)sendBodyDataWithContext:(id)a0;

@end

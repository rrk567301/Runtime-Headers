@class NSArray;

@interface GTReplayRequestBatch : NSObject

@property (nonatomic) unsigned long long requestID;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initNoRequestID;

@end

@class NSArray;

@interface GTCaptureRequestBatch : NSObject

@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestID:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

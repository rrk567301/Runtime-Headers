@class NSArray;

@interface GTCaptureRequestBatch : NSObject

@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithRequestID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

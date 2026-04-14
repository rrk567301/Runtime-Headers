@class NSData, NSError, NSURLResponse;

@interface SHNetworkResponse : NSObject

@property (readonly) NSData *data;
@property (readonly) NSURLResponse *urlResponse;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end

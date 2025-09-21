@class NSString;

@interface SFUIImageRequest : NSObject

@property (readonly, nonatomic) int requestID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char synchronous;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 identifier:(id)a1 synchronous:(char)a2 resultHandler:(id /* block */)a3;

@end

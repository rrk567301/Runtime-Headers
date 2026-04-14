@class NSString;

@interface IDSGlobalLinkAllocateRequestHandle : NSObject {
    id /* block */ _block;
}

@property (readonly) NSString *requestID;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRequestID:(id)a0 cancelBlock:(id /* block */)a1;

@end

@class NSString, NSDate;

@interface HMDXPCRequest : HMFObject

@property (readonly, copy) NSString *name;
@property (readonly) long long qualityOfService;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, copy) id /* block */ responseHandler;

- (id)initWithName:(id)a0 qualityOfService:(long long)a1 timeoutDate:(id)a2 responseHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end

@protocol FCContentContext;

@interface NTForYouService : NSObject <NTForYouServiceType>

@property (readonly, nonatomic) id<FCContentContext> contentContext;

- (id)initWithContentContext:(id)a0;
- (void).cxx_destruct;
- (void)fetchForYouWithRequest:(id)a0 configuration:(id)a1 fetchDate:(id)a2 completionHandler:(id /* block */)a3;

@end

@class NSDate, RTLocationRequestOptions;

@interface RTLocationManagerLocationRequest : NSObject

@property (readonly, nonatomic) RTLocationRequestOptions *options;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSDate *startDate;

- (id)expiryDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOptions:(id)a0 handler:(id /* block */)a1;

@end

@class NSString, RTPredictedContextOptions;

@interface RTPredictedContextClient : NSObject

@property (retain, nonatomic) id client;
@property (copy, nonatomic) NSString *clientIdentity;
@property (retain, nonatomic) RTPredictedContextOptions *options;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL singleShot;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 options:(id)a1 singleShot:(BOOL)a2 handler:(id /* block */)a3;

@end

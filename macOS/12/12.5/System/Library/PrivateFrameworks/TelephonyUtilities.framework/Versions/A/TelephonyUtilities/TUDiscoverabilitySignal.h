@class NSString;

@interface TUDiscoverabilitySignal : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *context;

+ (id)osBuild;

- (void).cxx_destruct;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)_discoverabilitySignalsStream;
- (id)initWithIdentifier:(id)a0 context:(id)a1;

@end

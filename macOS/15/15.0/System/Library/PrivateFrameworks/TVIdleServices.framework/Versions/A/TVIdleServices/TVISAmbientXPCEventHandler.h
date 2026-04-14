@protocol TVISEvolutionService;

@interface TVISAmbientXPCEventHandler : NSObject

@property (readonly, nonatomic) id<TVISEvolutionService> aerialService;

- (void).cxx_destruct;
- (void)start;
- (id)initWithServices:(id)a0;
- (void)_handleAppleLanguagesChanged;
- (void)_registerXPCEventHandler;

@end

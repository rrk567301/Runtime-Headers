@class NSDictionary;

@interface SGMISubmodelsAccumulator : NSObject

@property (readonly) NSDictionary *submodels;

- (id)init;
- (void).cxx_destruct;
- (void)ingest:(id)a0 asSalient:(BOOL)a1;
- (void)commitToStore:(id)a0;

@end

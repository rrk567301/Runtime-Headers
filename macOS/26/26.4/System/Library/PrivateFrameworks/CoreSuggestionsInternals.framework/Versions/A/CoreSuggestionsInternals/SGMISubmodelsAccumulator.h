@class NSDictionary;

@interface SGMISubmodelsAccumulator : NSObject

@property (readonly) NSDictionary *submodels;

- (void).cxx_destruct;
- (id)init;
- (void)commitToStore:(id)a0 updateDate:(id)a1;
- (void)ingest:(id)a0 asSalient:(BOOL)a1;

@end

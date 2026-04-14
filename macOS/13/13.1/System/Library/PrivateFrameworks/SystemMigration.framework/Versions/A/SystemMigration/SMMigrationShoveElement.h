@class NSObject;
@protocol SMShoveElementDelegate;

@interface SMMigrationShoveElement : SMMigrationEngineElement

@property (weak) NSObject<SMShoveElementDelegate> *delegate;

- (id)run;
- (void).cxx_destruct;
- (double)estimatedTimeToComplete;

@end

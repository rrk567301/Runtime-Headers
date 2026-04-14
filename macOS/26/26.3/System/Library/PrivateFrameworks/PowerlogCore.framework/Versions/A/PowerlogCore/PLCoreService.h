@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)stopServices;
- (id)init;
- (void).cxx_destruct;
- (void)startServices;
- (void)startPreUnlockServices;

@end

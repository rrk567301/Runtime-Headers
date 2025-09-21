@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)stopServices;
- (id)init;
- (void)startServices;
- (void)startPreUnlockServices;
- (void).cxx_destruct;

@end

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)stopServices;
- (void)startPreUnlockServices;
- (void)startServices;
- (void).cxx_destruct;
- (id)init;

@end

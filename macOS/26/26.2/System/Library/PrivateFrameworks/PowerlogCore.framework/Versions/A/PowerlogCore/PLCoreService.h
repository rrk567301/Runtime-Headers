@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)startPreUnlockServices;
- (void)startServices;
- (void)stopServices;
- (void).cxx_destruct;
- (id)init;

@end

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (void)startServices;
- (void)stopServices;
- (void).cxx_destruct;
- (id)init;
- (void)startPreUnlockServices;

@end

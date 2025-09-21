@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _scheduleFlushBlock;
    BOOL _needsSave;
    NSData *_originalState;
}

+ (id)allowedClasses;

- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)shouldPerformPCSMigration;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)_stateToData;
- (id)description;
- (void)setNeedsPCSMigration:(BOOL)a0;
- (BOOL)PCSMigrationComplete;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)_internal_queue;
- (id)dictionary;
- (void)scheduleFlush;
- (void)setObjectAndScheduleFlush:(id)a0 forKey:(id)a1;
- (id)dataPendingSave;
- (id)_prepareToSaveStateData;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1 scheduleFlushBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

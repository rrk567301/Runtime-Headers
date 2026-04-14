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

- (id)_stateToData;
- (void)scheduleFlush;
- (id)dictionary;
- (BOOL)PCSMigrationComplete;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1 scheduleFlushBlock:(id /* block */)a2;
- (id)_prepareToSaveStateData;
- (id)objectForKey:(id)a0;
- (BOOL)shouldPerformPCSMigration;
- (id)description;
- (id)_internal_queue;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjectAndScheduleFlush:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setNeedsPCSMigration:(BOOL)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dataPendingSave;
- (void)setObject:(id)a0 forKey:(id)a1;

@end

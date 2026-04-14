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

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjectAndScheduleFlush:(id)a0 forKey:(id)a1;
- (id)_stateToData;
- (id)objectForKey:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1 scheduleFlushBlock:(id /* block */)a2;
- (BOOL)shouldPerformPCSMigration;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dataPendingSave;
- (id)dictionary;
- (void).cxx_destruct;
- (void)setNeedsPCSMigration:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)scheduleFlush;
- (id)_internal_queue;
- (id)_prepareToSaveStateData;
- (BOOL)PCSMigrationComplete;

@end

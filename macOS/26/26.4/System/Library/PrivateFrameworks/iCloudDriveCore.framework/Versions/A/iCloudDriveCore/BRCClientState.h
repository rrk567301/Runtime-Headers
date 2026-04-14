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

- (BOOL)shouldPerformPCSMigration;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1 scheduleFlushBlock:(id /* block */)a2;
- (BOOL)PCSMigrationComplete;
- (void)setNeedsPCSMigration:(BOOL)a0;
- (void)scheduleFlush;
- (id)_internal_queue;
- (id)dataPendingSave;
- (void).cxx_destruct;
- (id)_prepareToSaveStateData;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)_stateToData;
- (id)description;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjectAndScheduleFlush:(id)a0 forKey:(id)a1;
- (id)dictionary;

@end

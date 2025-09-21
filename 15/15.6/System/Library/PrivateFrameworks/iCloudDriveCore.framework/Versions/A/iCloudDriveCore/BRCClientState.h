@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _scheduleFlushBlock;
    char _needsSave;
    NSData *_originalState;
}

+ (id)allowedClasses;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)_internal_queue;
- (char)PCSMigrationComplete;
- (id)_prepareToSaveStateData;
- (id)_stateToData;
- (char)hasStateChangesAndClearSaveStatusWithResultingState:(id *)a0;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1 scheduleFlushBlock:(id /* block */)a2;
- (void)scheduleFlush;
- (void)setNeedsPCSMigration:(char)a0;
- (void)setObjectAndScheduleFlush:(id)a0 forKey:(id)a1;
- (char)shouldPerformPCSMigration;

@end

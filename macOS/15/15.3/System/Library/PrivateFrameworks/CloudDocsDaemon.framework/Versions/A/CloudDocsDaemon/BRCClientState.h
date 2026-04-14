@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCClientState : NSObject {
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _needsSave;
    NSData *_originalState;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)_prepareToSaveStateData;
- (id)_stateToData;
- (BOOL)hasStateChangesAndClearSaveStatusWithResultingState:(id *)a0;
- (id)initWithDictionary:(id)a0 clientStateData:(id)a1;

@end

@class NSString, CADPredicate, ClientConnection, CADEventOccurrenceSet;

@interface CADPredicateMonitorAgent : NSObject <CADClientAgent> {
    CADPredicate *_predicate;
    ClientConnection *_conn;
    unsigned long long _filter;
    unsigned long long _options;
    CADEventOccurrenceSet *_occurrences;
    unsigned int _token;
    BOOL _shutdown;
    int _predicateGeneration;
    int _resetGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void).cxx_destruct;
- (void)reset;
- (void)start;
- (id)filterWithPredicate:(id)a0;
- (void)handleChangeReport:(id)a0;
- (id)initWithPredicate:(id)a0 filter:(unsigned long long)a1 options:(unsigned long long)a2 token:(unsigned int)a3 connection:(id)a4;
- (void)processChangeReport:(id)a0 forDatabaseID:(int)a1;
- (void)reportResultsReset:(BOOL)a0 newAndUpdated:(id)a1 removed:(id)a2 databaseIDForRemovals:(int)a3 reportPredicateGeneration:(BOOL)a4 generation:(int)a5;
- (void)reportResultsReset:(BOOL)a0 newAndUpdated:(id)a1 removed:(id)a2 reportPredicateGeneration:(BOOL)a3 generation:(int)a4;
- (void)updatePredicate:(id)a0 propertyFilter:(unsigned long long)a1 options:(unsigned long long)a2 generation:(int)a3;

@end

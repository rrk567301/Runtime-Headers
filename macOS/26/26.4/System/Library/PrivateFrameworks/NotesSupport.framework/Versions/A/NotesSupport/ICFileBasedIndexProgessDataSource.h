@class NSString, NSSet, NSURL, OS_dispatch_queue;

@interface ICFileBasedIndexProgessDataSource : NSObject <ICSearchIndexProgressCoordinatorDataSource> {
    void /* function */ identifier;
    void /* function */ pendingNew;
    void /* function */ pendingUpdate;
    void /* function */ completed;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSSet *pendingNew;
@property (nonatomic, copy) NSSet *pendingUpdate;
@property (nonatomic, copy) NSSet *completed;
@property (nonatomic, readonly) OS_dispatch_queue *queue;
@property (nonatomic, readonly) NSURL *persistenceURL;

- (void)update:(id)a0;
- (void)flush;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)adoptIndexState:(unsigned long long)a0 forItemWithIdentifier:(id)a1 updatingProgress:(id)a2;
- (id)allItemIdentifiersForState:(unsigned long long)a0;
- (void)fullProgressUpdateWithCompletionHandler:(id /* block */)a0;
- (void)revertStagingWithItemIdentifier:(id)a0;
- (void)stageForProcessingWithItemIdentifier:(id)a0 updatingProgress:(id)a1;
- (unsigned long long)stateOfItemWithIdentifier:(id)a0;

@end

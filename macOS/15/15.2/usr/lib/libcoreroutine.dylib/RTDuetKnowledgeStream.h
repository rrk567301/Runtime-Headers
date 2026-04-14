@class _DKEventStream, RTDuetKnowledgeStore;

@interface RTDuetKnowledgeStream : NSObject

@property (retain, nonatomic) _DKEventStream *eventStream;
@property (retain, nonatomic) RTDuetKnowledgeStore *knowledgeStore;
@property (readonly, nonatomic) long long streamType;

+ (id)duetKnowledgeStreamTypeToDuetEventStream:(long long)a0;
+ (id)streamTypeToString:(long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (id)_convertDuetEvent:(id)a0;
- (void)enumerateEventsWithinDateInterval:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithDuetKnowledgeStore:(id)a0 streamType:(long long)a1;
- (id)initWithStreamType:(long long)a0 knowledgeStore:(id)a1;

@end

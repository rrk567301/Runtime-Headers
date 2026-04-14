@class _DKEventStream;
@protocol ATXGenericEventStreamBase;

@interface ATXEventStreamWrapper : NSObject

@property (readonly, nonatomic) _DKEventStream *duetStream;
@property (readonly, nonatomic) id<ATXGenericEventStreamBase> atxStream;

- (void).cxx_destruct;
- (id)initWithATXStream:(id)a0;
- (id)initWithDuetStream:(id)a0;

@end

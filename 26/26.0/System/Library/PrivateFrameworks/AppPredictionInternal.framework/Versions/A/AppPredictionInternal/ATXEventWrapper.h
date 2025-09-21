@class _DKEvent;
@protocol ATXGenericEventBase;

@interface ATXEventWrapper : NSObject

@property (readonly, nonatomic) _DKEvent *dkEvent;
@property (readonly, nonatomic) id<ATXGenericEventBase> atxEvent;

- (void).cxx_destruct;
- (id)initWithATXEvent:(id)a0;
- (id)initWithDuetEvent:(id)a0;

@end

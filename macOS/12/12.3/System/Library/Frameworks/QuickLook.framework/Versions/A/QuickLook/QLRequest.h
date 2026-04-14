@class NSUUID, QLRequestSession;

@interface QLRequest : NSObject

@property int discardError;
@property (copy, nonatomic) id /* block */ generationWillStartBlock;
@property (copy, nonatomic) id /* block */ replyCreatedWithBitmapBlock;
@property (retain) QLRequestSession *session;
@property (retain) NSUUID *uuid;
@property (readonly) struct __QLRequest { } *requestRef;

- (void).cxx_destruct;
- (void)teardown;
- (id)initWithRequestRef:(struct __QLRequest { } *)a0;

@end

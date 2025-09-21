@interface TSCEAbortObject : NSObject

@property (readonly) char isAborted;

- (id)initWithSecondsTillAbort:(int)a0;

@end

@class NSString, NSError;
@protocol TMCopyEngineDelegate;

@interface TMCopyEngine : NSObject

@property (readonly, copy) NSString *operationName;
@property (readonly, copy) NSString *destinationName;
@property (readonly) unsigned int operationKind;
@property (readonly) unsigned int reportInterval;
@property (readonly) unsigned int options;
@property (retain) NSError *nodeOperationError;
@property (weak) id<TMCopyEngineDelegate> delegate;

+ (struct { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; })_copyCallbacksForDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithOperationName:(id)a0 kind:(unsigned int)a1 destinationName:(id)a2 reportInterval:(unsigned int)a3 options:(unsigned int)a4;
- (BOOL)copySourceURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;

@end

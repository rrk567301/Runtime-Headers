@class NSURL;

@interface TMCopyOperation : NSObject

@property (readonly) unsigned long long action;
@property (readonly) NSURL *propagationItemURL;
@property (readonly) NSURL *deltaItemURL;

+ (id)cloneAndDeltaOperationWithURL:(id)a0 deltaURL:(id)a1;
+ (id)cloneOperationWithURL:(id)a0;
+ (id)copyOperation;
+ (id)linkOperationWithURL:(id)a0;
+ (id)moveOperationWithURL:(id)a0;
+ (id)skipOperation;

- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 propagationURL:(id)a1 deltaURL:(id)a2;

@end

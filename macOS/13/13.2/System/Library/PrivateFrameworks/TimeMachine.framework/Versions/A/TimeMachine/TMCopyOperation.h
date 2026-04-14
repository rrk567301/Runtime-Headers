@class NSURL;

@interface TMCopyOperation : NSObject

@property (readonly) unsigned long long action;
@property (readonly) NSURL *propagationItemURL;
@property (readonly) NSURL *deltaItemURL;

+ (id)skipOperation;
+ (id)copyOperation;
+ (id)linkOperationWithURL:(id)a0;
+ (id)moveOperationWithURL:(id)a0;
+ (id)cloneOperationWithURL:(id)a0;
+ (id)cloneAndDeltaOperationWithURL:(id)a0 deltaURL:(id)a1;

- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 propagationURL:(id)a1 deltaURL:(id)a2;

@end

@class NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, NEIPSecSASessionDelegate;

@interface NEIPSecSASession : NSObject {
    NSString *_name;
    NSMutableArray *_internalSecurityAssociations;
    NSMutableArray *_larvalSAs;
    unsigned long long _uniqueIndex;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
}

@property (readonly) NSString *name;
@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSArray *securityAssociations;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (char)addLarvalSA:(id)a0;
- (char)addSA:(id)a0;
- (id)copyEmptySASession;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (char)migrateSA:(id)a0;
- (void)removeAllSAs;
- (char)removeSA:(id)a0;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (char)updateSA:(id)a0;

@end

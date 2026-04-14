@class NSLock, NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject {
    NSString *_cacheIdentifier;
}

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSLock *lock;
@property (readonly) unsigned long long accountType;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *sessionIdentifier;

+ (BOOL)shouldUseODIWithBag:(id)a0;
+ (BOOL)provideFeedbackOnPayloadOutcome:(unsigned long long)a0 cacheIdentifier:(id)a1 bag:(id)a2;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bundleIdentifier:(id)a2 bag:(id)a3;
- (id)_createODISession;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bag:(id)a2;
- (void)setCacheIdentifier:(id)a0;
- (id)getAssessment;
- (BOOL)updateWithAttributes:(id)a0;

@end

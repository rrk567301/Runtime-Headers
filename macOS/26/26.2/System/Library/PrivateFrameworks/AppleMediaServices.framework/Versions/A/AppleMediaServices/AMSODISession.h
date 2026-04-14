@class NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject

@property (retain) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long accountType;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *sessionIdentifier;

+ (id)_dispatchQueue;
+ (id)provideFeedbackWithOutcome:(unsigned long long)a0 cacheIdentifier:(id)a1 bag:(id)a2;

- (void).cxx_destruct;
- (id)createODISession;
- (id)getAssessment;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bundleIdentifier:(id)a2 bag:(id)a3;
- (id)provideUpdateWithAttributes:(id)a0;

@end

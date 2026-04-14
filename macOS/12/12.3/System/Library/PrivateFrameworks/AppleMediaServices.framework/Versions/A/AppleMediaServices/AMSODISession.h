@class NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject

@property (retain) id<AMSBagProtocol> bag;
@property (copy) NSString *cacheIdentifier;
@property (readonly) unsigned long long accountType;
@property (readonly, copy) NSString *sessionIdentifier;

+ (BOOL)shouldUseODIWithBag:(id)a0;

- (void).cxx_destruct;
- (id)_createODISession;
- (id)initWithSessionIdentifier:(id)a0 accountType:(unsigned long long)a1 bag:(id)a2;
- (id)getAssessment;
- (BOOL)updateWithAttributes:(id)a0;

@end

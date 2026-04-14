@class NSArray, NSString;

@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSArray *bundleIdentifiers;
@property (retain) NSString *clientIdentifier;
@property (retain) NSString *clientVersion;
@property (retain) NSArray *itemIdentifiers;
@property (retain) NSArray *includedResultKeys;
@property long long type;
@property (retain) NSString *urlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (id)_runMediaRequestWithURL:(id)a0 clientIdentifier:(id)a1 clientVersion:(id)a2;
- (id)_runMediaRequestWithType:(long long)a0 clientIdentifier:(id)a1 clientVersion:(id)a2;

@end

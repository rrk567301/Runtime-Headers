@class NSString, NSError;

@interface LNURLLaunchRequest : NSObject {
    void /* function */ doNotDismissSiriKey;
    void /* unknown type, empty encoding */ storage;
}

@property (nonatomic) BOOL dismissSiri;
@property (nonatomic, readonly) NSString *doNotDismissSiriKey;

+ (BOOL)isValidURLForLaunching:(id)a0;

- (id)init;
- (id)initWithAction:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(void (^)(NSError *))a0;
- (id)initWithEntity:(id)a0 metadata:(id)a1;
- (id)initWithEnumCaseIdentifier:(id)a0 metadata:(id)a1;
- (void)performValidatingURLScheme:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;

@end

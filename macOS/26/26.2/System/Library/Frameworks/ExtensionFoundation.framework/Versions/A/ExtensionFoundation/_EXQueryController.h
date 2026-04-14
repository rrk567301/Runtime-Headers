@class NSArray, NSString;

@interface _EXQueryController : NSObject {
    void /* unknown type, empty encoding */ innerController;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSArray *extensionIdentities;
@property (nonatomic, readonly) NSArray *queries;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *extensions;

+ (id)executeQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;

- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithQueries:(id)a0;
- (id)initWithQueries:(id)a0 delegate:(id)a1;
- (id)init;

@end

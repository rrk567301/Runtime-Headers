@class NSArray, NSString;

@interface _EXQueryController : NSObject {
    void /* unknown type, empty encoding */ innerController;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSArray *extensionIdentities;
@property (nonatomic, readonly) NSArray *queries;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *extensions;

+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)executeQueries:(id)a0;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)executeQuery:(id)a0;

- (void)resume;
- (id)initWithQueries:(id)a0 delegate:(id)a1;
- (void)suspend;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQueries:(id)a0;

@end

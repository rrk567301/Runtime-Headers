@class NSString, NSURL;

@interface AMSUIEngagementContentRecord : NSObject {
    void /* function */ app;
    void /* function */ cacheKey;
    void /* function */ contentExtension;
    void /* unknown type, empty encoding */ fallbackURL;
    void /* function */ version;
}

@property (nonatomic, readonly) NSString *app;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *contentExtension;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) NSString *version;

+ (BOOL)isURLEngagementContent:(id)a0;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end

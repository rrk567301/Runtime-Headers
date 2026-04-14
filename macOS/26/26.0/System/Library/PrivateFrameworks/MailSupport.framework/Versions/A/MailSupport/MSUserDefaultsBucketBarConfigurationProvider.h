@class NSString, NSUserDefaults;
@protocol EFCancelable;

@interface MSUserDefaultsBucketBarConfigurationProvider : NSObject <MSBucketBarConfigurationProvider> {
    void /* function */ bucketBarConfigurationKey;
    void /* function */ bucketSelectionConfigurationKey;
    void /* unknown type, empty encoding */ skipNextUpdate;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) NSString *bucketBarConfigurationKey;
@property (nonatomic, readonly) NSString *bucketSelectionConfigurationKey;
@property (nonatomic, retain) id<EFCancelable> token;

- (id)init;
- (void).cxx_destruct;
- (id)bucketBarConfiguration;
- (id)bucketSelectionConfiguration;
- (id)initWithUserDefaults:(id)a0 delegate:(id)a1;
- (void)storeBucketBarConfiguration:(id)a0;
- (void)storeBucketSelectionConfiguration:(id)a0;

@end

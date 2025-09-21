@class NSURL, NSString, NSNumber;

@interface PlayVideoIntentResponse : INIntentResponse

@property (nonatomic, copy) NSURL *urlToLaunch;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic, retain) NSNumber *isEntitled;
@property (nonatomic) long long code;

- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end

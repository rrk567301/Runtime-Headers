@class NSString, NSDate;

@interface AMSAccountCachedServerStringCore : NSObject {
    void /* unknown type, empty encoding */ cachedValue;
}

@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) char isStale;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, retain) void /* unknown type, empty encoding */ token;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end

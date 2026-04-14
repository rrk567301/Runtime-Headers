@class NSNumber, NSString, NSDate;

@interface AMSAccountCachedServerBoolCore : NSObject {
    void /* unknown type, empty encoding */ cachedValue;
}

@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) BOOL isStale;
@property (nonatomic, readonly) NSNumber *value;
@property (nonatomic, retain) id token;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end

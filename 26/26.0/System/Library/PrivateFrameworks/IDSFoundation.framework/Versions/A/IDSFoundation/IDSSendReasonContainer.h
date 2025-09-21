@class NSArray, NSString;

@interface IDSSendReasonContainer : NSObject {
    void /* function */ reasons;
}

@property (nonatomic, copy) NSArray *reasons;
@property (nonatomic, readonly) NSString *reasonString;

+ (id)createWithReasonString:(id)a0;
+ (id)createWithReason:(id)a0;
+ (id)createWithReasons:(id)a0;
+ (id)defaultReasonString;

- (id)init;
- (void).cxx_destruct;
- (id)addReason:(id)a0;
- (id)initWithReasons:(id)a0;
- (id)stringFromReasons:(id)a0;

@end

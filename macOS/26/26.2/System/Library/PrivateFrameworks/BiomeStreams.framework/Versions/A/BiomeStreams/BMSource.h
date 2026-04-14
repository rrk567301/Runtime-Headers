@class NSString;

@interface BMSource : NSObject

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (void)sendEvent:(id)a0 date:(id)a1;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

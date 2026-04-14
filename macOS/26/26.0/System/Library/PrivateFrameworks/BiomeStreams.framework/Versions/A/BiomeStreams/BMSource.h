@class NSString;

@interface BMSource : NSObject

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (void)sendEvent:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0 date:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

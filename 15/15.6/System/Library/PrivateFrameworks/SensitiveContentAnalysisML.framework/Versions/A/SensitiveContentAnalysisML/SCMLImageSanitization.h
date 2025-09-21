@class NSMutableDictionary;

@interface SCMLImageSanitization : NSObject

@property (nonatomic) char granularOutput;
@property (nonatomic) char safe;
@property (copy, nonatomic) NSMutableDictionary *signals;
@property (nonatomic) char regionalSensitive;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGranularOutput:(char)a0;
- (id)unsafeReason;
- (id)updateSignal:(id)a0 withSafe:(char)a1;
- (id)updateSignal:(id)a0 withSafe:(char)a1 withRegionalSensitive:(char)a2;
- (id)updateSignal:(id)a0 withSafe:(char)a1 withScore:(float)a2;

@end

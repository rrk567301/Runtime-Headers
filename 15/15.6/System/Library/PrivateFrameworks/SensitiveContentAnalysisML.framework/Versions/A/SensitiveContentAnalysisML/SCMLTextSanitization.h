@class NSMutableDictionary;

@interface SCMLTextSanitization : NSObject

@property (nonatomic) char granularOutput;
@property (copy, nonatomic) NSMutableDictionary *signals;
@property (nonatomic) char safe;
@property (nonatomic) unsigned int adapterViolationCategory;
@property (nonatomic) char regionalSensitive;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGranularOutput:(char)a0;
- (id)unsafeReason;
- (id)updateSignal:(id)a0 withSafe:(char)a1;
- (id)updateSignal:(id)a0 withSafe:(char)a1 withLabel:(id)a2;
- (id)updateSignal:(id)a0 withSafe:(char)a1 withRegionalSensitive:(char)a2;
- (id)updateSignal:(id)a0 withSafe:(char)a1 withScore:(float)a2;

@end

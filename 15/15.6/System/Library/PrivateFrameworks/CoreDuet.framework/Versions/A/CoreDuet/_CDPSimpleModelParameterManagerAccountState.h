@class _CDPSimpleModelParameterManagerTuningValue, NSMutableArray, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue;
@property (retain, nonatomic) NSMutableArray *tuningValues;
@property (retain, nonatomic) _CDPModelTuningState *lastTuningState;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

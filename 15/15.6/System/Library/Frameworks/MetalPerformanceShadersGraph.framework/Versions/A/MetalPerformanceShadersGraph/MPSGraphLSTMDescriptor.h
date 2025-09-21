@interface MPSGraphLSTMDescriptor : MPSGraphObject <NSCopying> {
    char _hasMask;
    char _hasInitState;
    char _hasInitCell;
    char _hasPeephole;
    char _hasCellGradient;
}

@property (nonatomic) char reverse;
@property (nonatomic) char bidirectional;
@property (nonatomic) char produceCell;
@property (nonatomic) char training;
@property (nonatomic) char forgetGateLast;
@property (nonatomic) unsigned long long inputGateActivation;
@property (nonatomic) unsigned long long forgetGateActivation;
@property (nonatomic) unsigned long long cellGateActivation;
@property (nonatomic) unsigned long long outputGateActivation;
@property (nonatomic) unsigned long long activation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

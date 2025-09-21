@interface MPSGraphGRUDescriptor : MPSGraphObject <NSCopying> {
    char _hasMask;
    char _hasInitState;
    char _hasBias2;
}

@property (nonatomic) char reverse;
@property (nonatomic) char bidirectional;
@property (nonatomic) char training;
@property (nonatomic) char resetGateFirst;
@property (nonatomic) char resetAfter;
@property (nonatomic) char flipZ;
@property (nonatomic) unsigned long long updateGateActivation;
@property (nonatomic) unsigned long long resetGateActivation;
@property (nonatomic) unsigned long long outputGateActivation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

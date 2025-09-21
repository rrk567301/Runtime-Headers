@interface MPSGraphSingleGateRNNDescriptor : MPSGraphObject <NSCopying> {
    char _hasMask;
    char _hasInitState;
}

@property (nonatomic) char reverse;
@property (nonatomic) char bidirectional;
@property (nonatomic) char training;
@property (nonatomic) unsigned long long activation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

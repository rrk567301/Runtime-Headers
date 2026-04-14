@class __end_cap_, __end_;

@interface aura_SimulatedIOController : NSObject <NSCopying>

@property (nonatomic) unsigned char ioControllerType;
@property (nonatomic) double sampleRate;
@property (nonatomic) struct vector<std::tuple<double, double>, std::allocator<std::tuple<double, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<double, double> *, std::allocator<std::tuple<double, double>>> { void *__value_; } __end_cap_; } supportedSampleRates;
@property (nonatomic) struct vector<aura_SimulatedIOStream *, std::allocator<aura_SimulatedIOStream *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_SimulatedIOStream *__strong *, std::allocator<aura_SimulatedIOStream *>> { id *__value_; } x1; } inputIOStreams;
@property (nonatomic) struct vector<aura_SimulatedIOStream *, std::allocator<aura_SimulatedIOStream *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_SimulatedIOStream *__strong *, std::allocator<aura_SimulatedIOStream *>> { id *__value_; } x1; } outputIOStreams;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

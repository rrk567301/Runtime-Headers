@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying, NSSecureCoding> {
    BOOL _noCopy;
    unsigned long long _count;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int neuronType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (retain, nonatomic) NSData *data;

+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1 b:(float)a2;
+ (id)cnnNeuronDescriptorWithType:(int)a0;
+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
+ (id)cnnNeuronPReLUDescriptorWithData:(id)a0 noCopy:(BOOL)a1;
+ (id)cnnNeuronDescriptorWithType:(int)a0 a:(float)a1;

- (id)debugDescription;
- (id)initWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)initializeWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
- (void)encodeWithCoder:(id)a0;
- (void)initializeWithPReLUWithData:(id)a0 noCopy:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (id)initWithPReLUWithData:(id)a0 noCopy:(BOOL)a1;

@end

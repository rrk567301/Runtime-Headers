@class NSDictionary;

@interface VSTSplatVolumeDataDump : VSTSplatVersionDump

@property (retain, nonatomic) NSDictionary *buffers;
@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;
@property (nonatomic) int format;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end

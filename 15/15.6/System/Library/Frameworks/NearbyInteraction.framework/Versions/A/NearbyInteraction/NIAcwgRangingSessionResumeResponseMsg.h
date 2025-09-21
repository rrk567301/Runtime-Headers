@interface NIAcwgRangingSessionResumeResponseMsg : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int stsIndex0;
@property (readonly, nonatomic) unsigned long long uwbTime0;

+ (id)fromStruct:(struct AcwgRangingSessionResumeResponseMsgStruct { unsigned int x0; unsigned long long x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStsIndex0:(unsigned int)a0 uwbTime0:(unsigned long long)a1;

@end

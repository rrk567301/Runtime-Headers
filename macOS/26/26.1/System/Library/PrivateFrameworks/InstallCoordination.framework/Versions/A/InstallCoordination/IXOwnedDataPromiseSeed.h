@class NSURL;
@protocol MILocationProtocol;

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *stagingBaseDir;
@property (retain, nonatomic) id<MILocationProtocol> location;

+ (id)_locationClassCluster;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (Class)clientPromiseClass;

@end

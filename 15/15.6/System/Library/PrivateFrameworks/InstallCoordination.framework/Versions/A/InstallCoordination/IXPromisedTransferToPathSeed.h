@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) char shouldCopy;
@property (nonatomic) char tryDeltaCopy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)clientPromiseClass;

@end

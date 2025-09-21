@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IXPromisedTransferToPathSeed *seed;
@property (nonatomic, getter=isComplete) char complete;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) char shouldCopy;
@property (nonatomic) char tryDeltaCopy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setComplete:(char)a0;
- (id)initWithSeed:(id)a0;
- (char)_doInit;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 transferPath:(id)a2 diskSpaceNeeded:(unsigned long long)a3;
- (Class)seedClass;
- (void)setShouldCopy:(char)a0;
- (void)setTransferPath:(id)a0;
- (void)setTryDeltaCopy:(char)a0;
- (char)shouldCopy;
- (id)transferPath;
- (char)tryDeltaCopy;

@end

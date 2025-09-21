@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedTransferToPathSeed *seed;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) BOOL shouldCopy;
@property (nonatomic) BOOL tryDeltaCopy;

- (void)setComplete:(BOOL)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_doInitWithError:(id *)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2 location:(id)a3;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 transferPath:(id)a2 diskSpaceNeeded:(unsigned long long)a3;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 transferPath:(id)a2 diskSpaceNeeded:(unsigned long long)a3 location:(id)a4;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 transferPath:(id)a2 diskSpaceNeeded:(unsigned long long)a3 location:(id)a4 error:(id *)a5;
- (Class)seedClass;
- (void)setShouldCopy:(BOOL)a0;
- (void)setTransferPath:(id)a0;
- (void)setTryDeltaCopy:(BOOL)a0;
- (BOOL)shouldCopy;
- (id)transferPath;
- (BOOL)tryDeltaCopy;

@end

@class NSString, NSURL, IXOwnedDataPromiseSeed;
@protocol MILocationProtocol;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSString *targetLastPathComponent;
@property (retain, nonatomic) NSURL *stagedPath;
@property (readonly, nonatomic) NSURL *stagingBaseDir;
@property (readonly, nonatomic) id<MILocationProtocol> location;


- (id)initWithSeed:(id)a0;
- (void)_internalInit;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2 location:(id)a3;
- (id)preflightPath;
- (Class)seedClass;
- (BOOL)setTargetLastPathComponent:(id)a0 error:(id *)a1;
- (id)stagingBaseDir;
- (id)targetLastPathComponentWithError:(id *)a0;

@end

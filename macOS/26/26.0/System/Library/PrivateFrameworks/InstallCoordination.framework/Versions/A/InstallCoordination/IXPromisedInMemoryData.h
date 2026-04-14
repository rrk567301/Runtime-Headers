@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedInMemoryDataSeed *seed;

- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 data:(id)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 data:(id)a2 location:(id)a3;
- (Class)seedClass;

@end

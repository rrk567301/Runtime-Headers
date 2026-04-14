@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed;

- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 dictionary:(id)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 dictionary:(id)a2 location:(id)a3;
- (Class)seedClass;

@end

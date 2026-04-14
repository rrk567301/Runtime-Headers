@class NSArray;

@interface XCTBacktrace : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *imageOffsets;
@property (readonly) NSArray *callStackReturnAddresses;
@property (readonly) BOOL needsOutOfProcessSymbolication;

+ (id)generateBacktraceWithImageOffsets;
+ (id)generateBacktraceWithCallStackAddresses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallStackReturnAddresses:(id)a0;
- (id)initWithImageOffsets:(id)a0 callStackReturnAddresses:(id)a1 needsOutOfProcessSymbolication:(BOOL)a2;
- (id)initWithImageOffsets:(id)a0 needsOutOfProcessSymbolication:(BOOL)a1;

@end

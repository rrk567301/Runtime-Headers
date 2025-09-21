@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSArray *callStackThreads;
@property (readonly) char callStackPerThread;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithThreadArray:(id)a0 aggregatedByProcess:(char)a1;

@end

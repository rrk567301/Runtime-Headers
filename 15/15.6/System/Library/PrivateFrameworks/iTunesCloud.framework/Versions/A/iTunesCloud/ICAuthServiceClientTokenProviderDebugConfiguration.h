@class NSArray;

@interface ICAuthServiceClientTokenProviderDebugConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long commandOption;
@property (readonly, nonatomic) char allDSIDsShouldError;
@property (readonly, nonatomic) char allDSIDsShouldSucceed;
@property (readonly, nonatomic) NSArray *errorDSIDs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommandOption:(unsigned long long)a0 allDSIDsShouldError:(char)a1 allDSIDsShouldSucceed:(char)a2 errorDSIDs:(id)a3;

@end

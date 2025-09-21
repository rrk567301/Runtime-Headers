@class NSArray;

@interface ICAuthServiceClientTokenProviderDebugConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long commandOption;
@property (readonly, nonatomic) BOOL allDSIDsShouldError;
@property (readonly, nonatomic) BOOL allDSIDsShouldSucceed;
@property (readonly, nonatomic) NSArray *errorDSIDs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommandOption:(unsigned long long)a0 allDSIDsShouldError:(BOOL)a1 allDSIDsShouldSucceed:(BOOL)a2 errorDSIDs:(id)a3;

@end

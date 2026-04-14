@class NSString;

@interface SHMediaLibraryQueryParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *providerIdentifier;
@property (readonly) long long resultsLimit;
@property (readonly) BOOL ascending;

+ (id)defaultParameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultsLimit:(long long)a0 ascending:(BOOL)a1;
- (void)commonInitWithResultsLimit:(long long)a0 ascending:(BOOL)a1 providerIdentifier:(id)a2;
- (BOOL)validateLimit:(long long)a0;
- (id)initWithResultsLimit:(long long)a0 ascending:(BOOL)a1 providerIdentifier:(id)a2;

@end

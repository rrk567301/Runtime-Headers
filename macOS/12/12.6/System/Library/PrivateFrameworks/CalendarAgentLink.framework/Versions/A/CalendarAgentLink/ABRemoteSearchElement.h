@class NSArray, NSString;

@interface ABRemoteSearchElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *children;
@property long long comparison;
@property long long conjunction;
@property BOOL diacriticInsensitive;
@property BOOL isNegation;
@property (retain) NSString *publicClassString;
@property (retain) NSString *searchKey;
@property (retain) NSString *searchLabel;
@property BOOL searchPeople;
@property (retain) NSString *searchProperty;
@property (retain) id searchValue;
@property unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

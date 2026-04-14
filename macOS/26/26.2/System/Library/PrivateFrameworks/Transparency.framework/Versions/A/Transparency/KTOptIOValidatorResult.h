@class NSDictionary, NSArray, NSDate;

@interface KTOptIOValidatorResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long state;
@property (retain) NSDictionary *uriNeedsOptInChange;
@property (retain) NSArray *uris;
@property (retain) NSDate *timestamp;
@property BOOL usedIntendedState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(unsigned long long)a0 timestamp:(id)a1;

@end

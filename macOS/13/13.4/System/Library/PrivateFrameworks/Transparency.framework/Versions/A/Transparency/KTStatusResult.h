@class NSArray, NSDictionary, NSDate;

@interface KTStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL optInState;
@property (retain) NSArray *recentFailedEventIds;
@property (retain) NSDate *expectedSelfResolutionDate;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

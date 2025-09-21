@class NSArray;

@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIDs;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int maxPeople;
@property (nonatomic) char excludeBackfills;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSArray;

@interface CNVCardReadingOptions : NSObject

@property (nonatomic) unsigned long long contactLimit;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic) BOOL useConcurrentParsing;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

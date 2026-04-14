@class NSNumber, NSDateInterval;

@interface RTStoredUserCurationFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) unsigned long long sortIndex;
@property (copy, nonatomic) NSDateInterval *submissionDateInterval;
@property (copy, nonatomic) NSDateInterval *visitDateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (BOOL)isEqualToFetchOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 sortIndex:(unsigned long long)a1 limit:(id)a2;
- (id)initWithAscending:(BOOL)a0 sortIndex:(unsigned long long)a1 submissionDateInterval:(id)a2 visitDateInterval:(id)a3 limit:(id)a4;
- (id)initWithAscending:(BOOL)a0 submissionDateInterval:(id)a1 limit:(id)a2;
- (id)initWithAscending:(BOOL)a0 limit:(id)a1;
- (id)initWithAscending:(BOOL)a0 visitDateInterval:(id)a1 limit:(id)a2;

@end

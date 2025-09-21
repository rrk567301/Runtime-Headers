@class NSArray, NSString, NSDate;

@interface WFContextualActionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *historicalActionIdentifiers;
@property (retain, nonatomic) NSDate *preciseTimestamp;
@property (retain, nonatomic) NSString *staccatoInteractionType;
@property (nonatomic) unsigned long long surface;
@property (retain, nonatomic) NSArray *files;
@property (nonatomic) char allowsExpensiveFetch;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSurface:(unsigned long long)a0;
- (id)initWithSurface:(unsigned long long)a0 staccatoInteractionType:(id)a1 preciseTimestamp:(id)a2;

@end

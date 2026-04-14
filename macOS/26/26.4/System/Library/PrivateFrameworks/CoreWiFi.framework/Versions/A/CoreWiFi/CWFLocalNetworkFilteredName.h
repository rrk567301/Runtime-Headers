@class NSString;

@interface CWFLocalNetworkFilteredName : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long reason;

+ (id)filteredName:(id)a0 reason:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)description;

@end

@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double lastSeen;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDomain:(id)a0 lastSeen:(double)a1;

@end

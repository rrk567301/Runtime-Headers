@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double lastSeen;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDomain:(id)a0 lastSeen:(double)a1;

@end

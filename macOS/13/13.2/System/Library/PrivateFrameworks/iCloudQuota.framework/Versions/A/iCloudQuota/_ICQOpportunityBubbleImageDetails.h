@class NSString;

@interface _ICQOpportunityBubbleImageDetails : NSObject

@property (copy, nonatomic) NSString *urlFor3x;
@property (copy, nonatomic) NSString *urlFor2x;
@property (copy, nonatomic) NSString *urlFor1x;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (id)getURLForScale:(long long)a0;

@end

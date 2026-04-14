@class NSArray, NSMutableAttributedString;

@interface SMSummaryNode : NSObject

@property (retain) NSMutableAttributedString *value;
@property (retain) NSArray *children;
@property BOOL isLeaf;
@property unsigned long long childCount;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 andChildren:(id)a1;

@end

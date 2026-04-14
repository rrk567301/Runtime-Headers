@class NSString, NSMutableArray;

@interface SMReportNote : NSObject

@property unsigned long long count;
@property (retain) NSMutableArray *datesSeen;
@property (readonly) NSString *note;

- (id)description;
- (void).cxx_destruct;
- (void)increment;
- (id)initWithMessage:(id)a0;

@end

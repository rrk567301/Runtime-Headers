@class NSString, NSError;

@interface CRRepairReportItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSError *error;

+ (id)itemWithName:(id)a0;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)withError:(id)a0;
- (id)withStatus:(long long)a0;

@end

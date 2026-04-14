@class CLPCReportingSchema, NSArray;

@interface CLPCReportingRows : NSObject

@property (retain, nonatomic) CLPCReportingSchema *schema;
@property (retain, nonatomic) NSArray *rows;

- (void).cxx_destruct;
- (id)init;

@end

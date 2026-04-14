@class NSArray, NSMutableArray;

@interface CLPCReportingSchema : NSObject {
    NSMutableArray *stagedColumns;
}

@property (nonatomic) unsigned long long schemaID;
@property (readonly, nonatomic) NSArray *columns;

- (void).cxx_destruct;
- (id)init;

@end

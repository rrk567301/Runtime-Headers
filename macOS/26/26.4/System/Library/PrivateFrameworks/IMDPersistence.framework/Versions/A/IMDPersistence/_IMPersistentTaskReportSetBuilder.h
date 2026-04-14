@class NSMutableDictionary, NSMutableArray;

@interface _IMPersistentTaskReportSetBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *reportSetHashMap;
@property (readonly, nonatomic) NSMutableArray *reportSet;

- (void).cxx_destruct;
- (id)reset;
- (id)init;
- (id)_reportForFlag:(unsigned long long)a0 lane:(unsigned long long)a1 reason:(long long)a2;
- (void)recordFlag:(unsigned long long)a0 lane:(unsigned long long)a1 reason:(long long)a2 count:(long long)a3;

@end

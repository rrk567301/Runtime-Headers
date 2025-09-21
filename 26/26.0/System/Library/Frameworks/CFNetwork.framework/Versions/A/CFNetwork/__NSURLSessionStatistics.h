@class NSUUID, NSMutableDictionary, NSArray;

@interface __NSURLSessionStatistics : NSObject {
    void *report;
    NSMutableDictionary *_dictionaryReport;
}

@property (readonly, nonatomic) NSMutableDictionary *dictionaryReport;
@property (readonly, nonatomic) NSUUID *nwActivity;
@property (readonly, nonatomic) NSUUID *taskUUID;
@property (readonly, nonatomic) NSArray *connectionUUIDS;
@property (retain) NSUUID *externallyVisibleNwActivity;
@property (retain) NSArray *externallyVisibleConnectionUUIDs;

+ (void)reportMetricsToSymptoms:(id)a0;
+ (struct { unsigned char x0[16]; unsigned char x1[16]; unsigned long long x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned int x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned char x11 : 4; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned long x16 : 40; struct { unsigned char x0[16]; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned short x8; unsigned char x9 : 4; unsigned char x10 : 4; unsigned char x11 : 4; unsigned char x12 : 4; unsigned char x13 : 4; unsigned char x14 : 4; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned short x24 : 15; } x17[0]; } *)createCFNetworkTaskMetrics_s:(id)a0;

- (void)dealloc;
- (id)initWithJSONData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCFNetworkReport:(void *)a0 length:(long long)a1;

@end

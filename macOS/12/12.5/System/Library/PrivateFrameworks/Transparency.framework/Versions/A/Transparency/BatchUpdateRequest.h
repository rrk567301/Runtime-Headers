@class NSString, NSMutableArray;

@interface BatchUpdateRequest : GPBMessage

@property (nonatomic) int version;
@property (copy, nonatomic) NSString *requestUuid;
@property (retain, nonatomic) NSMutableArray *updatesArray;
@property (readonly, nonatomic) unsigned long long updatesArray_Count;

+ (id)descriptor;

@end

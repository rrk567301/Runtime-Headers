@interface DiskImages2 : NSObject

@property (class, nonatomic) char debugLogsEnabled;
@property (class, nonatomic) char forwardLogs;

+ (char)attachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (char)retrieveInfoWithParams:(id)a0 error:(id *)a1;
+ (char)convertWithParams:(id)a0 error:(id *)a1;
+ (char)createBlankWithParams:(id)a0 error:(id *)a1;
+ (char)managedAttachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (char)resizeWithParams:(id)a0 error:(id *)a1;
+ (char)embedUserDataWithParams:(id)a0 error:(id *)a1;
+ (id)imageURLFromDevice:(id)a0 error:(id *)a1;
+ (char)retrieveUserDataWithParams:(id)a0 error:(id *)a1;
+ (char)verifyWithParams:(id)a0 error:(id *)a1;

@end

@interface DiskImages2 : NSObject

@property (class, nonatomic) BOOL debugLogsEnabled;
@property (class, nonatomic) BOOL forwardLogs;

+ (BOOL)attachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)retrieveInfoWithParams:(id)a0 error:(id *)a1;
+ (BOOL)changePasswordWithParams:(id)a0 error:(id *)a1;
+ (id)convertWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)createBlankWithParams:(id)a0 error:(id *)a1;
+ (BOOL)managedAttachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)resizeWithParams:(id)a0 error:(id *)a1;
+ (BOOL)retrieveUserDataWithParams:(id)a0 error:(id *)a1;
+ (BOOL)convertWithParams:(id)a0 error:(id *)a1;
+ (BOOL)embedUserDataWithParams:(id)a0 error:(id *)a1;
+ (id)imageURLFromDevice:(id)a0 error:(id *)a1;
+ (id)isEncryptedImageWithURL:(id)a0 error:(id *)a1;
+ (BOOL)verifyWithParams:(id)a0 error:(id *)a1;

@end

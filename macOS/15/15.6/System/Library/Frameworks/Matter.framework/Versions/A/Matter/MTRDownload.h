@class NSString, NSURL, NSFileHandle, NSNumber;

@interface MTRDownload : NSObject

@property (retain, nonatomic) NSString *fileDesignator;
@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) id /* block */ abortHandler;
@property (copy, nonatomic) id /* block */ finalize;

- (void).cxx_destruct;
- (void)success;
- (void)writeToFile:(id)a0 error:(out id *)a1;
- (void)deleteFile;
- (id)_toFileDesignatorString:(long long)a0 nodeID:(id)a1;
- (id)_toFileURL:(long long)a0 nodeID:(id)a1;
- (id)_toNodeIDString:(id)a0;
- (id)_toTypeString:(long long)a0;
- (void)abort:(id)a0;
- (void)cancelTimeoutTimer;
- (void)checkInteractionModelResponse:(id)a0 error:(id)a1;
- (void)createFile:(id *)a0;
- (void)failure:(id)a0;
- (id)initWithType:(long long)a0 fabricIndex:(id)a1 nodeID:(id)a2 timeout:(double)a3 queue:(id)a4 completion:(id /* block */)a5 done:(id /* block */)a6;
- (BOOL)matches:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2;

@end

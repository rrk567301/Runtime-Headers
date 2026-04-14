@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPBitValueRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (BOOL)record:(id)a0;
- (BOOL)recordBitVectors:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (id)init;
- (id)description;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (BOOL)recordBitVectors:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;

@end

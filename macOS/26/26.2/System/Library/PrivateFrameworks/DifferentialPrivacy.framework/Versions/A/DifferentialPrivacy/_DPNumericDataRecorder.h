@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPNumericDataRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (BOOL)recordNumbersVectors:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (id)init;
- (BOOL)record:(id)a0;

@end

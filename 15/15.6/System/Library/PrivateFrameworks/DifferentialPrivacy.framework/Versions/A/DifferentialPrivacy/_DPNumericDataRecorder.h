@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPNumericDataRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)record:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(char)a2;
- (char)record:(id)a0 metadata:(id)a1;
- (char)recordNumbersVectors:(id)a0;
- (char)recordNumbersVectors:(id)a0 metadata:(id)a1;

@end

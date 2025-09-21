@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPFloatValueRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;

- (BOOL)recordFloatVectors:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (id)init;
- (id)description;
- (BOOL)recordFloatVectors:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;

@end

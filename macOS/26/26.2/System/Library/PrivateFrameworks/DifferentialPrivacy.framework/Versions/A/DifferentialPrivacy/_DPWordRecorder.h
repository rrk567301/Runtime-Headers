@protocol _DPDataRecorder, _DPDataRecorderKeyProperties;

@interface _DPWordRecorder : NSObject

@property (readonly, nonatomic) id<_DPDataRecorder, _DPDataRecorderKeyProperties> recorder;
@property (readonly, nonatomic) unsigned long long wordFragmentWidth;

- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 databaseDirectoryPath:(id)a1 readOnly:(BOOL)a2;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)record:(id)a0;

@end

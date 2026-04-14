@class NSString, NSObject, _DPKeyProperties;

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties>

@property (readonly, copy, nonatomic) NSString *keyName;
@property (readonly, nonatomic) _DPKeyProperties *keyProperties;
@property (readonly, nonatomic) NSObject *randomizer;
@property (readonly, nonatomic) double privacyParameter;
@property (readonly, nonatomic) unsigned long long range;
@property (readonly, nonatomic) BOOL directUpload;

- (id)initWithKey:(id)a0;
- (void)recordFloatVectors:(id)a0;
- (void)recordWords:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (id)description;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0;
- (void).cxx_destruct;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (id)init;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;

@end

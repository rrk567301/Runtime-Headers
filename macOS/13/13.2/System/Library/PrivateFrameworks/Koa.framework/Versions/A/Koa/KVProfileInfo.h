@class NSData, NSString;

@interface KVProfileInfo : NSObject <KVJSONEncodable, KVJSONDecodable> {
    const struct ProfileInfo { unsigned char x0[1]; } *_profileInfo;
}

@property (readonly, nonatomic) NSData *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syntheticWithDatasetCount:(unsigned int)a0 error:(id *)a1;
+ (id)capturedWithDatasetCount:(unsigned int)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)deviceType;
- (id)buildVersion;
- (unsigned int)datasetCount;
- (id)capturedTime;
- (id)JSONWithIndent:(unsigned char)a0;
- (id)initFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithDatasetCount:(unsigned int)a0 capturedTime:(id)a1 deviceType:(id)a2 buildVersion:(id)a3 error:(id *)a4;
- (id)initWithBuffer:(id)a0 error:(id *)a1;
- (BOOL)isEqualToProfileInfo:(id)a0;

@end

@class NSData;

@interface VCPVNImageprintWrapper : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) int version;
@property (readonly, nonatomic) NSData *data;

+ (id)generateVNImageprintWithType:(unsigned long long)a0 archiveData:(id)a1 andError:(id *)a2;
+ (id)wrapperWithImageprintType:(unsigned long long)a0 version:(int)a1 andData:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (BOOL)calculateDistance:(float *)a0 toWrapper:(id)a1 andError:(id *)a2;
- (id)initWithImageprintType:(unsigned long long)a0 version:(int)a1 andData:(id)a2;

@end

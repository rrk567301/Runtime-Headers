@class NSData, NSNumber;

@interface NFReaderSessionPollConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int technology;
@property (retain, nonatomic) NSData *ecp;
@property (nonatomic) unsigned int pollDuration;
@property (nonatomic) BOOL skipMifareClassify;
@property (nonatomic) BOOL lpcd;
@property (nonatomic) BOOL fieldDetect;
@property (retain, nonatomic) NSNumber *typeFSystemCode;

+ (id)pollConfigWithTechnology:(unsigned int)a0;
+ (id)pollConfigWithTypeFSystemCode:(id)a0;

- (id)asDictionary;
- (id)initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

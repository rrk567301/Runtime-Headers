@class NSData;

@interface AUParameterValueTranslation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *otherDesc;
@property (nonatomic) unsigned int otherParamID;
@property (nonatomic) float otherValue;
@property (nonatomic) unsigned long long auParamID;
@property (nonatomic) float auValue;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

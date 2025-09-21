@class NSString, NSDictionary, NSData, SFTopic, SFCommandReference;

@interface SFFillToolFileParameterCommand : SFCommand <SFFillToolFileParameterCommand, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *encodedTypedValue;
@property (copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;
+ (char)supportsVersion:(long long)a0;
+ (id)identifierFromData:(id)a0 error:(id *)a1;
+ (char)isUnsupportedVersionError:(id)a0;
+ (id)unsupportedVersionError;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (char)readFrom:(id)a0 error:(id *)a1;
- (char)writeTo:(id)a0 error:(id *)a1;
- (id)emptyProtobufError;
- (char)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end

@class NSString, NWInterface, NSData, NSObject;
@protocol OS_nw_endpoint;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (retain, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NSString *parentEndpointDomain;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (nonatomic) unsigned short alternatePort;
@property (nonatomic) long long remoteInterfaceType;
@property (retain, nonatomic) NSData *txtRecord;

+ (id)endpointWithCEndpoint:(id)a0;
+ (unsigned int)endpointType;
+ (BOOL)supportsResolverCallback;
+ (Class)copyClassForEndpointType:(int)a0;
+ (id)endpointWithInternalEndpoint:(id)a0;
+ (id)endpointWithProtocolBufferData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithEndpoint:(id)a0;
- (id)copyCEndpoint;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithEncodedData:(id)a0;
- (id)createProtocolBufferObject;

@end

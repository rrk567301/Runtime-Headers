@class NSString, MRPlayerPath, NSData, _MRApplicationConnectionContextProtobuf;

@interface MRApplicationConnectionContext : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) MRPlayerPath *destinationPlayerPath;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRApplicationConnectionContextProtobuf *protobuf;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;
- (id)initWithIdentifier:(id)a0 service:(id)a1 destinationPlayerPath:(id)a2;

@end

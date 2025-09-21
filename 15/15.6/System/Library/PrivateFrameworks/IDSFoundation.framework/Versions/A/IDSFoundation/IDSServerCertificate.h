@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0;

@end

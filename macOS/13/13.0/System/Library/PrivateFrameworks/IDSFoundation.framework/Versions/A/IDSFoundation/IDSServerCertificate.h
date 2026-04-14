@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0;

@end

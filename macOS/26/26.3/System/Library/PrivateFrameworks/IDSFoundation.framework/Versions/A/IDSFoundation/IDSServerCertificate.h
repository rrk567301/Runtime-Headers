@class NSData;

@interface IDSServerCertificate : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

- (id)description;
- (id)initWithDataRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

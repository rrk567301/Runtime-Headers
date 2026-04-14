@class NSNumber, NSString;

@interface AuRA_IOTopologyDescription : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *ioTopologyClass;
@property (retain, nonatomic) NSNumber *ioTopologySource;
@property (retain, nonatomic) NSString *uid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

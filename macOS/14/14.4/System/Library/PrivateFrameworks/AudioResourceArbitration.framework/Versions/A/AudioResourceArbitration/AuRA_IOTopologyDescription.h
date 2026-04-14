@class NSNumber, NSString;

@interface AuRA_IOTopologyDescription : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *ioTopologyClass;
@property (retain, nonatomic) NSNumber *ioTopologySource;
@property (retain, nonatomic) NSString *uid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

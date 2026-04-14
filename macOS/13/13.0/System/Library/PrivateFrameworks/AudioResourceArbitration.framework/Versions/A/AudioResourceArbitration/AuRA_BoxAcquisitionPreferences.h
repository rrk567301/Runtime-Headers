@protocol AuRA_Box;

@interface AuRA_BoxAcquisitionPreferences : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Box> box;
@property (nonatomic) BOOL acquire;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

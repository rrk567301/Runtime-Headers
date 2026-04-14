@class NSArray;

@interface AuRA_ConfigurationHints : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *virtualPortHints;
@property (retain, nonatomic) NSArray *deviceHints;
@property (retain, nonatomic) NSArray *ioControllerHints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

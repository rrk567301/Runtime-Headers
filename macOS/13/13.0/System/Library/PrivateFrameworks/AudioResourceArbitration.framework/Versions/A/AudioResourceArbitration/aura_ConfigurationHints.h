@class NSArray;

@interface AuRA_ConfigurationHints : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *virtualPortHints;
@property (retain, nonatomic) NSArray *deviceHints;
@property (retain, nonatomic) NSArray *ioControllerHints;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

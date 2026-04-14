@class NSArray;

@interface AuRA_ConfigurationHints : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *virtualPortHints;
@property (retain, nonatomic) NSArray *deviceHints;
@property (retain, nonatomic) NSArray *ioControllerHints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

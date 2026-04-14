@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

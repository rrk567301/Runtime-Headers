@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

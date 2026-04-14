@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)hasCompleteData;
- (void)didInitFromSOS;

@end

@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode

@property (nonatomic) BOOL isEarlyReturn;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 arguments:(id)a1 controlDependencies:(id)a2 isEarlyReturn:(BOOL)a3;

@end

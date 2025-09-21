@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode

@property (nonatomic) char isEarlyReturn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithName:(id)a0 arguments:(id)a1 controlDependencies:(id)a2 isEarlyReturn:(char)a3;

@end

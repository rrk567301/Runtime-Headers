@interface XQueryFilterStep : XQueryStep

+ (id)filterStepWithExpr:(id)a0;

- (void)processItems:(id)a0 toResults:(id)a1 forContext:(id)a2 validate:(char)a3;

@end

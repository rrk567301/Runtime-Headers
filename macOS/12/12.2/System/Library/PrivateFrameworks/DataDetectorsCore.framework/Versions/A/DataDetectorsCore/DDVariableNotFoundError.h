@class NSString;

@interface DDVariableNotFoundError : DDErrorRegexp <NSCopying> {
    NSString *_name;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)initWithVariableName:(id)a0;

@end

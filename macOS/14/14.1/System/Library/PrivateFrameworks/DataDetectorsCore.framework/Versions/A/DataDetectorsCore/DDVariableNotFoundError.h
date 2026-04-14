@class NSString;

@interface DDVariableNotFoundError : DDErrorRegexp <NSCopying> {
    NSString *_name;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVariableName:(id)a0;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;

@end

@class NSString;

@interface DDVariableNotFoundError : DDErrorRegexp <NSCopying> {
    NSString *_name;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithVariableName:(id)a0;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;

@end

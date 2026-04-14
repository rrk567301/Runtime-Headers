@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    BOOL _substitutePK;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;

@end

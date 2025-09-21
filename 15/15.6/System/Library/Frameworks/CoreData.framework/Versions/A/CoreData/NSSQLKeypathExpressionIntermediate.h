@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    char _substitutePK;
}

- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(char)a1 inContext:(id)a2;
- (id)generateSQLStringInContext:(id)a0;

@end

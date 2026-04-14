@interface NLLexiconCompletion : NSObject {
    unsigned int _tokenID;
    double _score;
}

- (unsigned int)tokenID;
- (double)score;
- (id)description;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1;

@end

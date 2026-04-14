@interface NLLexiconCompletion : NSObject {
    unsigned int _tokenID;
    double _score;
}

- (unsigned int)tokenID;
- (id)description;
- (double)score;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1;

@end

@interface TIWordSearchCangjie : TIWordSearchShapeBased

@property char suchengEnabled;
@property char supportsEnglish;

- (int)mecabraInputMethodType;
- (id)uncachedCandidatesForOperation:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (char)validateCode:(id)a0 withOption:(unsigned long long)a1;

@end

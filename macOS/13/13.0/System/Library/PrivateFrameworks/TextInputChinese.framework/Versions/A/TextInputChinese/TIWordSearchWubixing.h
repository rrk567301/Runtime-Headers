@interface TIWordSearchWubixing : TIWordSearchShapeBased

@property (nonatomic) int wubiStandard;

- (void)dealloc;
- (int)mecabraInputMethodType;
- (void)updateMecabraState;
- (id)mecabraCreationOptionsDictionary;
- (id)uncachedCandidatesForOperation:(id)a0;
- (unsigned char)nameReadingPairGenerationMode;
- (int)wubiStandardPreference;
- (void)checkWubiStandard;
- (id)autoconvertWubiXingPrefixes:(id)a0 option:(unsigned long long)a1 candidateResultSet:(id)a2 autoconvertedCandidateArray:(id *)a3;
- (void *)shouldAutoCommitCode:(id)a0 withOption:(unsigned long long)a1;

@end

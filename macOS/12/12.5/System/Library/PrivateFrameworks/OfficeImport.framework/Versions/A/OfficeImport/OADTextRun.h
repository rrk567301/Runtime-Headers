@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned long long)characterCount;
- (void)removeUnnecessaryOverrides;
- (BOOL)isSimilarToTextRun:(id)a0;

@end

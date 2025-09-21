@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned long long)characterCount;
- (char)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

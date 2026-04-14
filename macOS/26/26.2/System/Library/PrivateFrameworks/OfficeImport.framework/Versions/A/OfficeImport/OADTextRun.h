@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (void)setProperties:(id)a0;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned long long)characterCount;
- (void)removeUnnecessaryOverrides;
- (BOOL)isSimilarToTextRun:(id)a0;

@end

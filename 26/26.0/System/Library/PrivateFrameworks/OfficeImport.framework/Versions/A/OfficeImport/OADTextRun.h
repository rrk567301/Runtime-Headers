@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void)setProperties:(id)a0;
- (id)init;
- (id)properties;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

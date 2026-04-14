@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)properties;
- (void)setProperties:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

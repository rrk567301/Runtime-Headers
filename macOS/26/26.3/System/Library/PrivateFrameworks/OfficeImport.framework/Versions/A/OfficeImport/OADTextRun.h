@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)properties;
- (void)setProperties:(id)a0;
- (BOOL)isEmpty;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

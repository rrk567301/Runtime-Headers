@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

@interface _KSTextReplacementHelper : NSObject

+ (id)sampleShortcut;
+ (id)errorStringForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 failedAdds:(id)a1 failedDeletes:(id)a2;
+ (id)transactionFromTextReplacementEntry:(id)a0 forDelete:(BOOL)a1;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)appleLanguagesPreference;
+ (long long)validateTextReplacement:(id)a0;
+ (id)multipleAddErrors:(id)a0 removeErrors:(id)a1;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)a0;
+ (void)extractAggdMetricsForTextReplacement:(id)a0;
+ (id)aggdPrefix;
+ (id)fetchConfigurationPlist;
+ (void)logPhraseWordCount:(long long)a0;
+ (id)errorWithCode:(long long)a0 forEntry:(id)a1;
+ (void)logAggdValueForSyncIsPull:(BOOL)a0 success:(BOOL)a1;

@end

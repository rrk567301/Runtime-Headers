@interface _KSTextReplacementHelper : NSObject

+ (id)errorWithCode:(long long)a0 failedAdds:(id)a1 failedDeletes:(id)a2;
+ (long long)validateTextReplacement:(id)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)fetchConfigurationPlist;
+ (void)logPhraseWordCount:(long long)a0;
+ (id)multipleAddErrors:(id)a0 removeErrors:(id)a1;
+ (id)transactionFromTextReplacementEntry:(id)a0 forDelete:(BOOL)a1;
+ (id)sampleShortcut;
+ (void)logAggdValueForSyncIsPull:(BOOL)a0 success:(BOOL)a1;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)a0;
+ (void)extractAggdMetricsForTextReplacement:(id)a0;
+ (id)errorWithCode:(long long)a0 forEntry:(id)a1;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)appleLanguagesPreference;
+ (id)errorStringForCode:(long long)a0;
+ (id)aggdPrefix;

@end

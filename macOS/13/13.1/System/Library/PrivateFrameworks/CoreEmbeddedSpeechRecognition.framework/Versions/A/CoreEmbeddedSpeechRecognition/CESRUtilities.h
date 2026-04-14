@interface CESRUtilities : NSObject

+ (long long)calculateDiffInDaysFromTimestamp:(id)a0;
+ (BOOL)hasRecognizedAnythingInAFSpeechPackage:(id)a0;
+ (id)afTokensForEARTokens:(id)a0 removeSpaceBefore:(BOOL)a1;
+ (id)afRecognitionForEARSausage:(id)a0 processedAudioDuration:(double)a1;
+ (id)afSpeechPackageForEARPackage:(id)a0 processedAudioDuration:(double)a1 speechProfileUsed:(BOOL)a2;
+ (id)speechProfileRootDirectories;
+ (id)speechProfilePathsWithLanguage:(id)a0;
+ (void)loadSpeechProfiles:(id)a0 language:(id)a1;
+ (id)earTokensToString:(id)a0;
+ (id)voiceCommandsParamKeyBuilder:(unsigned long long)a0;
+ (id)afVoiceCommandGrammarParseResultForEARTokenString:(id)a0 withEARVoiceCommandInterpretations:(id)a1;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)a0;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)a0;
+ (id)earTokensForAFTokens:(id)a0 appendedAutoPunctuation:(BOOL)a1;
+ (id)mapContextOptionToString:(unsigned long long)a0;
+ (id)languageStringForLocaleString:(id)a0;
+ (id)localeStringForLanguageString:(id)a0;
+ (BOOL)isFilePathValid:(id)a0;
+ (id)audioData:(id)a0 withBytesFromEnd:(unsigned long long)a1;
+ (unsigned long long)audioLengthInBytes:(double)a0 samplingRate:(unsigned long long)a1;
+ (double)audioDurationInMs:(id)a0 samplingRate:(unsigned long long)a1;

@end

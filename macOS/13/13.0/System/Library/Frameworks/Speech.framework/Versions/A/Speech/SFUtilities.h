@interface SFUtilities : NSObject

+ (void)initialize;
+ (BOOL)canAccessPathAt:(id)a0 methodName:(id)a1 error:(id *)a2;
+ (void)supportedLocalesWithCompletion:(id /* block */)a0;
+ (id)taskNameFromTaskHint:(long long)a0;
+ (id)transcriptionFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)recognitionMetadataFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)transcriptionsWithTokens:(id)a0;
+ (id)recognizedResultFromPackage:(id)a0;
+ (BOOL)isSpeechXPCEnabled;
+ (id)issueReadWriteSandboxExtensionForDirectoryPath:(id)a0 error:(id *)a1;
+ (id)issueReadSandboxExtensionForFilePath:(id)a0 error:(id *)a1;
+ (BOOL)isCacheDirInternal;
+ (id)lsrCacheDirPath;

@end

@interface CSConfig : NSObject

+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (float)inputRecordingSampleRate;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (double)inputRecordingBufferDuration;
+ (unsigned long long)channelForVoiceIsolation;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (float)daysBeforeRemovingLogFiles;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (float)inputRecordingDurationInSecsExtended;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)exclaveRecordingNumSamples;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned int)audioConverterBitrate;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned long long)serverLoggingChannelBitset;
+ (float)remoteVADDuration;
+ (unsigned long long)exclaveRecordingNumChannels;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (float)defaultSpeakerOutDuckToLevelInDB;
+ (float)inputRecordingSampleRateNarrowBand;

@end

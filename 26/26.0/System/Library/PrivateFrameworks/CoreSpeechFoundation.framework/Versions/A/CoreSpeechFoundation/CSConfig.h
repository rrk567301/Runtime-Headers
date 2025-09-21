@interface CSConfig : NSObject

+ (unsigned long long)exclaveRecordingNumSamples;
+ (unsigned long long)channelForOutputReference;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned long long)channelForVoiceIsolation;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (unsigned long long)exclaveRecordingNumChannels;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (float)defaultSpeakerOutDuckToLevelInDB;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (double)inputRecordingBufferDuration;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (float)remoteVADDuration;
+ (long long)inputRecordingEncoderAudioQuality;
+ (float)inputRecordingDurationInSecsExtended;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (id)inputRecordingSampleRateConverterAlgorithm;

@end

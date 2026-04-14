@interface CSConfig : NSObject

+ (float)remoteVADDuration;
+ (long long)inputRecordingEncoderAudioQuality;
+ (float)inputRecordingDurationInSecsExtended;
+ (float)inputRecordingSampleRate;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (float)inputRecordingDurationInSecs;
+ (float)defaultSpeakerOutDuckToLevelInDB;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (double)inputRecordingBufferDuration;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (BOOL)inputRecordingIsFloat;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned long long)exclaveRecordingNumChannels;
+ (unsigned long long)exclaveRecordingNumSamples;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned long long)channelForVoiceIsolation;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned long long)channelForOutputReference;

@end

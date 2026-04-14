@interface CSConfig : NSObject

+ (float)remoteVADDuration;
+ (float)inputRecordingSampleRate;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned long long)channelForVoiceIsolation;
+ (float)inputRecordingDurationInSecsExtended;
+ (float)inputRecordingDurationInSecs;
+ (unsigned long long)exclaveRecordingNumChannels;
+ (unsigned long long)channelForOutputReference;
+ (float)defaultSpeakerOutDuckToLevelInDB;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned long long)exclaveRecordingNumSamples;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (unsigned int)audioConverterBitrate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;
+ (unsigned int)inputRecordingFramesPerPacket;

@end

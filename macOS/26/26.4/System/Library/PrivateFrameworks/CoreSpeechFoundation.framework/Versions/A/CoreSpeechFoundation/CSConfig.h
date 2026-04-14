@interface CSConfig : NSObject

+ (unsigned long long)exclaveRecordingNumChannels;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)remoteVADDuration;
+ (unsigned long long)serverLoggingChannelBitset;
+ (float)defaultSpeakerOutDuckToLevelInDB;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (float)inputRecordingDurationInSecs;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)audioConverterBitrate;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingSampleRateNarrowBand;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (float)inputRecordingSampleRate;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (unsigned long long)exclaveRecordingNumSamples;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned long long)channelForVoiceIsolation;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (unsigned long long)channelForProcessedInput;
+ (float)inputRecordingDurationInSecsExtended;

@end

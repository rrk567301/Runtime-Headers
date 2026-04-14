@interface CSConfig : NSObject

+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (double)defaultContinousFingerprintBufferDuration;
+ (double)inputRecordingBufferDuration;
+ (float)inputRecordingDurationInSecs;
+ (BOOL)inputRecordingIsFloat;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (float)remoteVADDuration;
+ (unsigned int)audioConverterBitrate;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (int)csAudioProcessingQueuePriority;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (float)inputRecordingDurationInSecsExtended;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)serverLoggingChannelBitset;
+ (double)defaultContinousFingerprintBufferDurationForRemora;

@end

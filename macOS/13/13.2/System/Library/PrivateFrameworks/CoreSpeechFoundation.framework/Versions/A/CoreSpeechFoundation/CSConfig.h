@interface CSConfig : NSObject

+ (int)csAudioProcessingQueuePriority;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (double)defaultContinousFingerprintBufferDuration;
+ (double)inputRecordingBufferDuration;
+ (float)inputRecordingDurationInSecs;
+ (BOOL)inputRecordingIsFloat;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)remoteVADDuration;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned int)audioConverterBitrate;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (float)inputRecordingDurationInSecsExtended;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)serverLoggingChannelBitset;
+ (double)defaultContinousFingerprintBufferDurationForRemora;

@end

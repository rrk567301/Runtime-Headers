@interface CSConfig : NSObject

+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (BOOL)inputRecordingIsFloat;
+ (double)inputRecordingBufferDuration;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (float)inputRecordingSampleRateNarrowBand;
+ (int)csAudioProcessingQueuePriority;
+ (unsigned long long)channelForProcessedInput;
+ (float)remoteVADDuration;
+ (unsigned int)audioConverterBitrate;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned long long)channelForOutputReference;
+ (float)daysBeforeRemovingLogFiles;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (double)defaultContinousFingerprintBufferDuration;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)serverLoggingChannelBitset;

@end

@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand

+ (id)startScreenRecording;
+ (id)startScreenRecordingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end

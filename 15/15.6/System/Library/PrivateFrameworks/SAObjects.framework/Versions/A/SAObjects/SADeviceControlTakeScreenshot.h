@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand

+ (id)takeScreenshot;
+ (id)takeScreenshotWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end

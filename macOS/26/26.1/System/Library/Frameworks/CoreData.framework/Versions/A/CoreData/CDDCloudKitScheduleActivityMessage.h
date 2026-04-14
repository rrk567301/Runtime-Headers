@class NSString;

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {
    unsigned long long _activityType;
    NSString *_storePath;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;

@end

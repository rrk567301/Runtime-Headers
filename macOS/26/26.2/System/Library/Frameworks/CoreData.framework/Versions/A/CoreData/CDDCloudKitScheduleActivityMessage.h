@class NSString;

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {
    unsigned long long _activityType;
    NSString *_storePath;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end

@class ULGAddLogEntry;

@interface ULGStagingEvent : NSObject <ULGSchemaType>

@property (nonatomic, retain) ULGAddLogEntry *logEntry;

- (id)serialize;
- (void).cxx_destruct;
- (id)init;

@end

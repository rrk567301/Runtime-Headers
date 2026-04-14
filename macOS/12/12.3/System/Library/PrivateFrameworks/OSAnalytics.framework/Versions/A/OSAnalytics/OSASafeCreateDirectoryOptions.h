@class NSNumber;

@interface OSASafeCreateDirectoryOptions : NSObject

@property BOOL createIntermediates;
@property (copy) NSNumber *groupID;
@property BOOL fileProtectionNone;

- (void).cxx_destruct;

@end

@class NSNumber;

@interface OSASafeCreateDirectoryOptions : NSObject

@property char createIntermediates;
@property (copy) NSNumber *userID;
@property (copy) NSNumber *groupID;
@property char fileProtectionNone;

- (void).cxx_destruct;

@end

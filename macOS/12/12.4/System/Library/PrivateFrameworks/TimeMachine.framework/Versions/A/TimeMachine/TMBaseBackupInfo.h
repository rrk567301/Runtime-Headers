@class NSString, NSURL, NSDate;

@interface TMBaseBackupInfo : NSObject

@property (readonly) NSString *name;
@property (readonly) NSDate *dateCompleted;
@property (readonly) NSURL *expectedBackupURL;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 date:(id)a1 expectedBackupURL:(id)a2;
- (id)initWithBackupURL:(id)a0 error:(id *)a1;
- (id)initWithDisk:(id)a0 error:(id *)a1;

@end

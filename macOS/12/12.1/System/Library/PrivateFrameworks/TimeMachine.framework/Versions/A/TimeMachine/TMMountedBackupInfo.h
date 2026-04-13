@class NSURL, NSString, NSDate;

@interface TMMountedBackupInfo : TMBaseBackupInfo <TMMountedBackupProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long maximumFileID;
@property (retain) NSURL *url;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) NSString *name;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMountedBackup:(id)a0;
- (id)readyForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)finishBrowsing:(id *)a0;
- (id)initWithDisk:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 url:(id)a1 expectedBackupURL:(id)a2 maximumFileID:(unsigned long long)a3 dateCompleted:(id)a4;

@end
